-- Last updated: 8/25/2026, 11:46:32 AM
# Write your MySQL query statement below
select distinct author_id as id from Views
where author_id = viewer_id
order by author_id;