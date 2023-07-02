import xlwings as xw
import re

app = xw.App(visible=False, add_book=False)

station_wb = app.books.open("\path\to\station_wb.xlsx")
summary_wb = app.books.open("\path\to\summary_wb.xlsx")
disposal_wb = app.books.open("\path\to\disposal_wb.xlsx")

# 格式刷函数
def copy_formatting(range_from, range_to):
    # 复制粘贴
    range_from.copy(range_to)

    # 清空粘贴后的单元格
    range_to.value = None

def get_number(value):
    """
    输入一个字符串，去除单位只保留数字和小数点
    """
    if type(value) == float:
        pass
    else:
        value = str(value)
        if '.' in value:
            value = float(re.search(r'\d+\.\d+', value).group())
        else:
            value = float(re.search(r'\d+', value).group())
    return value

station_ws = station_wb.sheets[0]
summary_ws = summary_wb.sheets["汇总"]
disposal_ws = disposal_wb.sheets[0]

# 获取最后行
station_last_row = station_ws.used_range.last_cell.row # 已用区域的最后一行
summary_last_row = summary_ws.range('A1').current_region.last_cell.row  # 最后一个非空行

# 获取单元格公式
c_fomula = summary_ws['C5'].fomula

copy_formatting(summary_ws.range('A5:N5'), summary_ws.range('A6:N6'))

# 收尾保存
station_wb.close()
summary_wb.save()
summary_wb.close()
disposal_wb.save('path\to\newfile.xlsx')
disposal_wb.close()
app.quit()

