-- Last updated: 8/25/2026, 11:46:43 AM
# Write your MySQL query statement below
select s.year , s.price , p.product_name  from Sales s
left join Product p on s.product_id =  p.product_id;