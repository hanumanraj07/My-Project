-- Last updated: 8/25/2026, 11:47:48 AM
# Write your MySQL query statement below
select e.name , b.bonus from Employee e
left join Bonus b on e.empId = b.empId
where  bonus < 1000 or bonus is null;