-- Last updated: 8/25/2026, 11:49:45 AM
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N = N-1;
  RETURN (
      # Write your MySQL query statement below.
         select distinct(salary) from Employee order by salary desc
         limit 1 offset N
  );
END