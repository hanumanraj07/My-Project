-- Last updated: 8/25/2026, 11:49:49 AM
# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary FROM Employee
WHERE salary < (SELECT MAX(salary) FROM Employee);