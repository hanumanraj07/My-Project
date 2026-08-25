-- Last updated: 8/25/2026, 11:44:31 AM
# Write your MySQL query statement below
(select e.employee_id from Employees e
left join Salaries s on s.employee_id = e.employee_id
where s.employee_id is NULL

union 

select s.employee_id from Employees e 
right join Salaries s on e.employee_id = s.employee_id
where e.employee_id is Null)

order by employee_id ASC