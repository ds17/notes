-- Active: 1667037546767@@127.0.0.1@3306@niukesql

--SQL29
SELECT DISTINCT device_id,
                date as date1,
                lead(date,1, NULL) over (partition by device_id order by date) as date2
FROM (
        SELECT DISTINCT device_id, date
        FROM question_practice_detail
     ) as A;

/*
lead(col_name,n,exp)
col_name：选择把哪一列连在后面
n：每行连接后面第n行的col_name
exp：没得连时的默认值，最后一行没的连
*/
SELECT avg(if(datediff(date2, date1)=1, 1,0)) as avg_ret
FROM(
        SELECT DISTINCT device_id,
                        date as date1,
                        lead(date,1, NULL) over (partition by device_id order by date) as date2
        FROM (
                SELECT DISTINCT device_id, date
                FROM question_practice_detail
            ) as A
    ) b;

--SQL30
/*
substring_index(str,sep,n)
返回第n个分隔符左边的字符串
*/
SELECT distinct SUBSTRING_INDEX(profile,',',-1) as gender, 
                COUNT(SUBSTRING_INDEX(profile,',',-1)) as number
FROM user_submit
GROUP BY gender;

SELECT 
    SUBSTRING_INDEX(profile,',',1) as hight,
    SUBSTRING_INDEX(SUBSTRING_INDEX(profile,',',2),',',-1) as weight,
    SUBSTRING_INDEX(SUBSTRING_INDEX(profile,',',-2),',',1) as age,
    SUBSTRING_INDEX(profile,',',-1) as gender
FROM user_submit;
