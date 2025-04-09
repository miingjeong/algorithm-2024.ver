-- 코드를 입력하세요
SELECT a.ANIMAL_ID, a.NAME from ANIMAL_OUTS as a
left join (
    select ANIMAL_ID,name,datetime from ANIMAL_INS) as b
on a.ANIMAL_ID=b.ANIMAL_ID
where   a.DATETIME <= b.DATETIME
order by b.DATETIME asc;