-- Last updated: 8/25/2026, 11:47:42 AM
# Write your MySQL query statement below
select customer_number as customer_number from Orders
group by customer_number 
order by count(customer_number) desc limit 1;