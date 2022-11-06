-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui


--按多个列排序
SELECT prod_id, prod_price, prod_name
FROM products
ORDER BY prod_price, prod_name;

--按相对位置排序
SELECT prod_id, prod_price, prod_name
FROM products
ORDER BY 2,3
