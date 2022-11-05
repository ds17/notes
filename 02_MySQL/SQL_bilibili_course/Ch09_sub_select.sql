-- Active: 1667037546767@@127.0.0.1@3306@atguigudb

select salary
FROM employees as e
WHERE last_name ='abel';

SELECT last_name, salary
FROM employees as e
WHERE salary > 11000;

SELECT last_name, salary
FROM employees 
WHERE salary > (
    select salary
    from employees
    where last_name ='abel'
);

SELECT e2.last_name,e2.salary
FROM employees e1,employees e2
WHERE e2.salary > e1.salary 
AND e1.last_name = 'Abel';

--题目：查询工资大于149号员工工资的员工的信息
SELECT employee_id,last_name,salary
FROM employees as e
where salary > (
                SELECT salary
                FROM employees
                WHERE employee_id = 149
);

--题目：返回job_id与141号员工相同，salary比143号员工多的员工姓名，job_id和工资
SELECT employee_id,last_name,salary
FROM employees 
WHERE job_id = (
                SELECT job_id
                FROM employees
                WHERE employee_id = 141
)
AND salary > (
                SELECT salary
                FROM employees
                WHERE employee_id =143
);

--题目：返回公司工资最少的员工的last_name,job_id和salary
SELECT last_name, job_id, salary
FROM employees
WHERE salary <= (
                    SELECT MIN(salary)
                    FROM employees
);

--题目：查询与141号员工的manager_id和department_id相同的其他员工
--的employee_id，manager_id，department_id。
SELECT employee_id, manager_id, department_id
FROM employees
WHERE manager_id = (
                    SELECT manager_id
                    FROM employees
                    WHERE employee_id=141
)
AND  department_id = ( 
                    SELECT department_id
                    FROM employees
                    WHERE employee_id = 141
)
AND employee_id !=141;

--题目：查询最低工资大于110号部门最低工资的部门id和其最低工资
SELECT department_id, MIN(salary)
FROM employees 
GROUP BY department_id
HAVING min(salary) >(
                        SELECT MIN(salary)
                        FROM employees
                        WHERE department_id=110
                    );

--题目：显式员工的employee_id,last_name和location。
--其中，若员工department_id与location_id为1800的department_id相同，
--则location为’Canada’，其余则为’USA’。
SELECT employee_id, last_name, 
        CASE department_id
            WHEN (
                    SELECT department_id
                    FROM departments
                    WHERE location_id = 1800
                 ) THEN 'Canada'
            ELSE 'USA'
            END AS location
FROM employees;

--5、多行子查询
SELECT employee_id, last_name
FROM   employees
WHERE  salary IN
                (SELECT   MIN(salary)
                 FROM     employees
                 GROUP BY department_id); 

--# ANY / ALL:
--题目：返回其它job_id中比job_id为‘IT_PROG’部门任一工资低的员工的员工号、
--姓名、job_id 以及salary
SELECT employee_id,job_id,last_name,salary
FROM employees
WHERE salary <ALL (
                    SELECT salary
                    FROM employees
                    WHERE job_id = 'IT_PROG'
)
AND job_id <> 'IT_PROG';

--题目：查询平均工资最低的部门id
--MySQL中聚合函数是不能嵌套使用的。
SELECT department_id, AVG(salary) as dept_avg_salary
FROM employees
GROUP BY department_id
HAVING dept_avg_salary = (
                            SELECT min(dept_avg_salary)
                            FROM(
                                        SELECT AVG(salary) as dept_avg_salary
                                        FROM employees
                                        GROUP BY department_id
                                ) as dept_avg_table
                          );


SELECT min(dept_avg_salary)
FROM(
            SELECT AVG(salary) as dept_avg_salary
            FROM employees
            GROUP BY department_id
) as dept_avg_table;


--方式1：
SELECT department_id
FROM employees
GROUP BY department_id
HAVING avg(salary) =( 
                SELECT min(avg_sal)
                FROM (
                        SELECT AVG(salary) as avg_sal
                        FROM employees
                        GROUP BY department_id
                ) as t_avg_salary
);

--方式2：
SELECT department_id
from employees
group by department_id
having avg(salary) <= all (
                            SELECT AVG(salary)
                            FROM employees
                            GROUP BY department_id   
);

--题目：查询员工中工资大于本部门平均工资的员工的last_name,salary和其department_id
--方式1：
SELECT last_name, salary, department_id
FROM employees as e1
WHERE salary > (
                    SELECT AVG(salary)
                    FROM employees as e2
                    WHERE department_id = e1.department_id
);
--方式2：
SELECT e1.last_name, e1.salary, e1.department_id
FROM employees as e1
join (
        SELECT department_id, AVG(salary) as avg_sal
        FROM employees
        GROUP BY department_id
) as t_dept_avg_sal
on e1.department_id = t_dept_avg_sal.department_id
WHERE e1.salary > t_dept_avg_sal.avg_sal;


--题目：查询员工的id,salary,按照department_name 排序
SELECT employee_id, salary
FROM employees as e
ORDER BY (
            SELECT department_name
            from departments as d
            WHERE d.department_id = e.department_id
);


--题目：若employees表中employee_id与job_history表中employee_id相同的数目不小于2，
--输出这些相同id的员工的employee_id,last_name和其job_id
SELECT employee_id, last_name, job_id
FROM employees AS e
WHERE 2<= (
            SELECT num_job
            FROM (
                    SELECT employee_id, count(employee_id) as num_job
                    from job_history
                    GROUP BY employee_id
            ) as t_num_job
            WHERE t_num_job.employee_id = e.employee_id
);

SELECT employee_id, last_name, job_id
FROM employees AS e
WHERE 2<= (
            SELECT COUNT(*)
            FROM job_history as j
            WHERE j.employee_id = e.employee_id
);

--题目：查询公司管理者的employee_id，last_name，job_id，department_id信息
SELECT employee_id, last_name, job_id, department_id
FROM employees as e1
WHERE e1.employee_id IN (
                            SELECT manager_id
                            FROM employees as e2
                            --HERE manager_id is not null
) ;

--方式2：使用exist
SELECT employee_id, last_name, job_id, department_id
FROM employees as e1
WHERE EXISTS (
                SELECT *
                FROM employees as e2
                WHERE e1.employee_id = e2.manager_id
);

--题目：查询departments表中，不存在于employees表中的部门的department_id和department_name
SELECT department_id, department_name
FROM departments as d1
WHERE d1.department_id not EXISTS (
                                    SELECT *
                                    FROM employees as e
                                    WHERE e.department_id = d1.department_id
                                    
);

