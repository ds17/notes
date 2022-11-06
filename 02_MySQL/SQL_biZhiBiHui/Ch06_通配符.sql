-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

--%
/*
%：匹配任意多个任意字符
%通配符，不匹配NULL，因为NULL是未知的
(_)：下划线匹配单个字符
*/
SELECT prod_name
FROM products
WHERE prod_name LIKE '%';

--[]
/*
mysql中方括号是正则模式，表示一个正则表达式，所以如下过滤不显示任何内容
mysql只支持两种通配符：% (_)
*/
SELECT cust_contact
FROM customers
WHERE cust_contact LIKE '[JM]%';

--遗留问题
/*
SQL中的正则表达式问题
*/
