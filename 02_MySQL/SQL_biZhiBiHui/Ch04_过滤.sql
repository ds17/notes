-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

--BETWEEN
SELECT prod_name, prod_price
FROM products
WHERE prod_price BETWEEN 5.99 and 9.49;
/*
between a and b
包括指定的开始值和结束值
a必须<=b
*/

--NULL
/*
确定值是否为NULL不能简单地检查是否=NULL
要用：IS NULL
*/
SELECT cust_name
FROM customers
WHERE cust_email  IS NULL;
/*
想要过滤不包含exp的所有行时，包含NULL值的行不会返回；
因为NULL是为知，DBMS不知道是否匹配，所以无论在匹配过滤还是非匹配过滤时，都不会返回。
*/

--NOT
SELECT cust_name
FROM customers
WHERE cust_email IS NOT NULL;