select count(a.name) 
from (select name from animal_ins group by name) as A
where name is not null