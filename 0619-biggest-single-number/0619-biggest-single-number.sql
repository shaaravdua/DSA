# Write your MySQL query statement below
select max(num) as num from myNumbers where num in (select if(count(num)<2,num,null)
from myNumbers group by num );