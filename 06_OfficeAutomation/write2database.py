import os
import pandas as pd
import pymysql
import warnings
from datetime import datetime
import numpy as np
from sqlalchemy import create_engine, inspect, text

warnings.filterwarnings('ignore')

# 配置数据库链接信息
host = 'localhost'
port = 3306
user = 'root'
password = '231500'
database = 'bizhibihui'
table_name = 'twitter_sentiment'

# # 用pymysql
# connection  = pymysql.connect(host=host, port=port, user=user, password=password, db=database, charset='utf8mb4')
# cursor = connection.cursor()
# cursor.execute(f"drop table if exists {table_name}")
# cursor.execute(f"CREATE TABLE IF NOT EXISTS {table_name} (number int, tweet text, sentiment FLOAT)")

# # 获取表中列信息
# cursor.execute(f"SELECT COLUMN_NAME FROM INFORMATION_SCHEMA.COLUMNS WHERE TABLE_SCHEMA = '{database}' AND TABLE_NAME = '{table_name}' ORDER BY ordinal_position")
# columns_db = [col[0] for col in cursor.fetchall()]

# 用sqlalchemy，创建engine
engine = create_engine(f'mysql+pymysql://{user}:{password}@localhost/{database}') # 加上echo=True时可以动态输出sql执行情况
inspector = inspect(engine)

# 获取表的元数据
columns_meta = inspector.get_columns(table_name)
columns_db = [column['name'] for column in columns_meta]

df = pd.read_csv(r"D:\Data\twitter_dataset.csv")
# 重命名列名
df.rename(columns={'Unnamed: 0':'number'}, inplace =True)
df.replace(np.nan, None, inplace=True)

columns_file = list(df.columns)

def split_dataframe(df, n):
    """
    输入一个大的datafame，每n行拆分成一个新的df，最后将所有的新df放在一个列表中返回
    """
    num_rows = df.shape[0]
    num_splits = (num_rows + n - 1) // n  # 向上取整计算拆分次数

    split_dfs = []
    for i in range(num_splits):
        start_idx = i * n
        end_idx = min((i + 1) * n, num_rows)
        
        split_df = df.iloc[start_idx:end_idx]
        split_dfs.append(split_df)

    return split_dfs

dfs = split_dataframe(df, 100000)


if columns_file == columns_db:
    pass
else:
    raise ValueError("表头不一致")

total_rows = 0
exe_start_time = datetime.now()

# 写入数据库
for sub_df in dfs:
    # 删除表中除第一行以外的所有数据
    # cursor.execute(f"DELETE FORM {table_name}")
    rows = len(sub_df)
    total_rows += rows

    # # 用pymysql写入数据库
    # for _,row in sub_df.iterrows():
    #     ss = tuple(row)
    #     sql = f"INSERT INTO {table_name} VALUES ({','.join(['%s']*len(row))})"
    #     cursor.execute(sql, tuple(row))
    # connection.commit()

    # 用sqlalchemy写入数据库，用sqlalchemy写入的速度远比pymysql快
    # 300万行数据，pymysql写入用了35分钟，sqlalchemy用时：8.9分钟
    sub_df.to_sql(name=table_name, con=engine, if_exists='replace', index=False) # if_exists='replace' 会覆盖原来的数据
    sub_df.to_sql(name=table_name, con=engine, if_exists='append', index=False) # if_exists='append' 会追加数据

    print(f"本次循环写入了 {rows} 行数据")
    print(f"目前已写入：{total_rows} 行")
    print(f"剩余：{df.shape[0] - total_rows} 行待写入")
# # 关闭connection
# connection.close()


exe_end_time = datetime.now()
timeit = (exe_end_time - exe_start_time).total_seconds()

print(f"运行完毕，运行耗时：{timeit} 秒")


# 运行sql获取数据
sql = "select * from twitter_sentiment limit 1000"

## 方法一：建立连接运行代码
with engine.connect() as con:    # The connection is automatically closed when exiting the 'with' block.
    results = con.execute(text(sql))

df_from_con = pd.DataFrame(results.fetchall(), columns=results.keys())

## 方法二：直接用pandas读取
df_from_pd = pd.read_sql(sql, engine)

# Dispose the engine
engine.dispose()

