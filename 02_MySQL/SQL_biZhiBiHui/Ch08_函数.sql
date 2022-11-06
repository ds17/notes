-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

SELECT NOW(), CURdate()
FROM DUAL;

--函数类型
/*
1、文本字符串函数
2、算术计算函数
3、时间函数
4、系统函数
*/

--文本处理函数
--如何用函数清除字符串后面的空格？
/*
TRIM(str)：去除字符串前后的空格
RTRIM(str)：去除字符串右边的空格
LTRIM(str)：去除字符串左边的空格
*/

SELECT vend_name, UPPER(vend_name) as vend_name_upcase
FROM vendors;
SELECT LEFT('asbga',3);
SELECT LENGTH('asbga');
SELECT LOWER('ABCDEFG');
SELECT RIGHT('ABCDEFG', 3);
SELECT SOUNDEX('ABCDEFG');

--时间函数
SELECT order_num
FROM orders
WHERE year( order_date) =2012;

--数值处理函数