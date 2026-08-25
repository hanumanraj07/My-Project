-- Last updated: 8/25/2026, 11:47:36 AM
select x , y, z ,
case 
when x+y > z 
and x+z > y 
and z+y > x then "Yes" 
else "No"
end as triangle
from Triangle;