-- Active: 1667037546767@@127.0.0.1@3306@bizhibihui

/*distinct 关键字作用于所有的列，不仅仅是紧跟之后的列*/


SELECT prod_name
FROM products
LIMIT 3 OFFSET 4
--LIMIT 4, 3
/*
limit m OFFSET N
从第N行开始，限制显示m行
N从0开始编号
等价于： limit N ,M
第一种可读性更高
*/