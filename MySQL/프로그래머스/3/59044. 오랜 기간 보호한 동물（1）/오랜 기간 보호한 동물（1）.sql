-- 코드를 입력하세요
SELECT a.NAME,a.DATETIME from ANIMAL_INS  as a
left join (
    select   NAME, DATETIME,ANIMAL_ID from ANIMAL_OUTS ) as b
on a.ANIMAL_ID=b.ANIMAL_ID
where b.ANIMAL_ID is null
order by DATETIME asc limit 3;