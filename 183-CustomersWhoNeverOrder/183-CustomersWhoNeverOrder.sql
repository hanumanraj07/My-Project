-- Last updated: 8/25/2026, 11:49:38 AM
# Write your MySQL query statement below
select Customers.name as Customers
from Customers
left join Orders
on Customers.id = Orders.customerId
where Orders.customerId is null;