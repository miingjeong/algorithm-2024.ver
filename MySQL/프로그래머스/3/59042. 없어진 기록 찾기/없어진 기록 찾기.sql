-- 코드를 입력하세요
SELECT a.ANIMAL_ID, a.NAME from ANIMAL_OUTS as a
left join (
SELECT ANIMAL_ID,NAME from ANIMAL_INS) as b
on a.ANIMAL_ID=b.ANIMAL_ID
where b.ANIMAL_ID is null
order by ANIMAL_ID asc, NAME asc;