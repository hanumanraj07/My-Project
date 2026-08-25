-- Last updated: 8/25/2026, 11:45:06 AM
# Write your MySQL query statement below
select tweet_id from Tweets 
where char_length(content) > 15;