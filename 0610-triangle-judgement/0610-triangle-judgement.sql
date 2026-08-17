# Write your MySQL query statement below
select x,y,z,if(abs(sum(x+y)>z),'Yes','No') as triangle
from Triangle group by x,y,z;