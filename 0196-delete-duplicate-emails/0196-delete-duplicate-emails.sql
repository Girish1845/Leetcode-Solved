# Write your MySQL query statement below
delete p from person p 
join 
(
select id,
row_number() over(partition by email order by id) as rn
from person) as x on p.id=x.id
where x.rn>1;