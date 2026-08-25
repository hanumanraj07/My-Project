-- Last updated: 8/25/2026, 11:49:42 AM
# Write your MySQL query statement below
select e.name as Employee from Employee e
join Employee m on m.id = e.managerId
where e.salary > m.salary;