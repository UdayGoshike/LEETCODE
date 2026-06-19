# Write your MySQL query statement below
with ta as(SELECT d.name as Department,e.name as Employee,e.salary as Salary, DENSE_RANK() OVER ( partition by d.id ORDER BY salary DESC) as rk from Employee e join  department d on e.departmentId=d.id)
select Department,Employee,Salary from ta where rk<=3;