-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

--AND OR
SELECT prod_name, prod_price
FROM products
WHERE prod_price>=10
AND (vend_id = 'DLL01' OR vend_id = 'BRS01');

--IN
SELECT prod_name, prod_price
FROM products
WHERE prod_price>=10
AND vend_id in('DLL01' ,'BRS01');

--NOT
SELECT cust_name
FROM customers
WHERE cust_email IS NOT NULL;