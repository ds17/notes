-- Active: 1667037546767@@127.0.0.1@3306@atguigudb

--2.查询公司员工工资的最大值，最小值，平均值，总和
SELECT MIN(salary), MAX(salary), AVG(salary), SUM(salary)
FROM employees;

--3.查询各job_id的员工工资的最大值，最小值，平均值，总和
SELECT job_id,MAX(salary), MIN(salary), AVG(salary), SUM(salary)
FROM employees
GROUP BY job_id;

--4.选择具有各个job_id的员工人数
SELECT job_id, COUNT(job_id) AS per_no
FROM employees
GROUP BY job_id;

-- 5.查询员工最高工资和最低工资的差距（DIFFERENCE）  #DATEDIFF
SELECT MAX(salary) - min(salary) as difference
from employees;

-- 6.查询各个管理者手下员工的最低工资，其中最低工资不能低于6000，没有管理者的员工不计算在内
SELECT manager_id, min(salary) as min_salary
from employees
WHERE manager_id is not null
GROUP BY manager_id
HAVING min_salary >=6000;

-- 7.查询所有部门的名字，location_id，员工数量和平均工资，并按平均工资降序 
SELECT d.department_name, d.location_id, count(e.employee_id), avg(e.salary)
from departments as d
left JOIN employees as e
on e.department_id = d.department_id
GROUP BY d.department_name, d.location_id;

-- 8.查询每个工种、每个部门的部门名、工种名和最低工资
SELECT e.job_id, d.department_name, j.job_title, min(salary)
from employees as e
join departments as d
on e.department_id = d.department_id
join jobs as j
on j.job_id = e.job_id
GROUP BY e.job_id, d.department_name;