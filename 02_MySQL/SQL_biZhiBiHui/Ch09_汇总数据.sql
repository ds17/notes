-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

--COUNT()
/*
COUNT(*)：计算所有的行，无论是否包含NULL
COUNT(col_name)：对特定列中具有值的行进行计数，忽略NULL值
*/
SELECT COUNT(*)
FROM customers; /*输出：5*/
SELECT COUNT(cust_email)
FROM customers;  /*输出：3*/


