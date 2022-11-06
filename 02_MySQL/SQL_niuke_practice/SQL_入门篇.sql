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

--SQL32
SELECT age,COUNT(distinct age) as number
FROM(
        SELECT SUBSTRING_INDEX(SUBSTRING_INDEX(profile, ',',-2),',',1) as age
        FROM user_submit
    ) a
GROUP BY age
ORDER BY age DESC;

--SQL33
SELECT university, min(gpa) as min_gpa
FROM user_profile
GROUP BY university;

--解法一
SELECT device_id, a.university,gpa
FROM user_profile a
LEFT JOIN (
            SELECT university, min(gpa) as min_gpa
            FROM user_profile
            GROUP BY university
          ) b
on a.university = b.university
WHERE a.gpa <= b.min_gpa
ORDER BY university;

--解法二
SELECT device_id, university,gpa
FROM user_profile
WHERE gpa in (
                SELECT min(gpa) as min_gpa
                FROM user_profile
                GROUP BY university
             )
ORDER BY university;

-- SQL34

select * 
from question_practice_detail
WHERE date>='2021-08-01'
and date< '2021-09-01';

SELECT up.device_id, up.university, qpd.question_id, qpd.result, qpd.date
FROM user_profile up
LEFT JOIN question_practice_detail qpd
on up.device_id = qpd.device_id
WHERE up.university = '复旦大学';

--解法一：
/*
if(exp=NULL,a,b)：这种形式判断不出NULL，
以后统一用IFNULL(exp,a)来判断NULL
*/
SELECT device_id,
       university,
       sum(if(IFNULL(question_id,0)=0,0,1)) as question_cnt,
       sum(IF(result='right',1,0)) as right_question_cnt
from(
        SELECT up.device_id, 
               up.university, 
               qpd.question_id, 
               qpd.result, 
               ifnull(qpd.date,'2021-08-01') as date
        FROM user_profile up
        LEFT JOIN question_practice_detail qpd
        on up.device_id = qpd.device_id
        WHERE up.university = '复旦大学'
    ) b
WHERE MONTH(date)=8
GROUP BY device_id,university;

--解法二
/*
join的时候加上日期条件，而不是join后加where筛选，前者会保留join得到的NULL值，后者很可能会过滤到NULL值
COUNT()计数的时候会自动把NULL值计为0
*/
SELECT up.device_id,
       up.university,
       COUNT(question_id) as question_cnt,
       sum(if(qpd.result='right',1,0)) as right_question_cnt
FROM user_profile as up 
LEFT JOIN question_practice_detail qpd
on up.device_id = qpd.device_id
and MONTH(qpd.date) =8
WHERE up.university ='复旦大学'
GROUP BY up.device_id;
/*
LEFT JOIN  ON  and：and只能对从表进行过滤，不能对主表进行过滤
INNER JOIN  ON  and：and既可以对主表也可以对从表进行过滤
*/



--SQL35
--不完全解法
SELECT difficult_level, 
       sum(if(qpd.result='right',1,0))/ COUNT(qd.difficult_level) as correct_rate
FROM user_profile up
LEFT JOIN question_practice_detail qpd
on up.device_id = qpd.device_id
LEFT JOIN question_detail qd
on qpd.question_id = qd.question_id  
WHERE up.university='浙江大学'
GROUP BY difficult_level
ORDER BY correct_rate ASC;

--完全解法
SELECT difficult_level, 
       sum(if(qpd.result='right',1,0))/ COUNT(qd.difficult_level) as correct_rate
FROM question_practice_detail qpd
LEFT JOIN user_profile up
on up.device_id = qpd.device_id
LEFT JOIN question_detail qd
on qpd.question_id = qd.question_id  
WHERE up.university='浙江大学'
GROUP BY difficult_level
ORDER BY correct_rate ASC;
/*
第一个不完全解法，提交时三个用例只能通过2个。
第二个完全解法，可以通过全部测试用例。
原因在于：输出正确率的主要参数在于 qpd.result，因此要完成保留qpd表。
所以必须将qpd表作为左表进行left join
*/

--SQL36
SELECT device_id,age
FROM user_profile
ORDER BY age asc;

--SQL37
SELECT device_id, gpa, age
FROM user_profile
ORDER BY gpa asc , age ASC;

--SQL38
SELECT device_id, gpa, age
from user_profile
ORDER BY gpa DESC, age DESC;

--SQL39
SELECT count(DISTINCT device_id ) as did_cnt,
       count(question_id) as question_cnt
FROM question_practice_detail
--WHERE YEAR(DATE) = '2021'
--AND MONTH(date) = '08'
--WHERE date like '2021-08%'
WHERE DATE_FORMAT(date, '%Y-%m')='2021-08';
 