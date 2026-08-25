-- Last updated: 8/25/2026, 11:49:39 AM
# Write your MySQL query statement below
select email from Person as Email
group by email
having count(*) > 1;