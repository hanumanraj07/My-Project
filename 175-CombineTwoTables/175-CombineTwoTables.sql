-- Last updated: 8/25/2026, 11:49:52 AM
# Write your MySQL query statement below
SELECT 
  Person.firstName,
  Person.lastName,
  Address.city,
  Address.state
 
FROM Person

LEFT JOIN Address
ON  Person.personId = Address.personId;