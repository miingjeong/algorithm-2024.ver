-- 코드를 입력하세요
select a.FLAVOR from FIRST_HALF as a
join ICECREAM_INFO  as b
on a.FLAVOR=b.FLAVOR
where b.INGREDIENT_TYPE='fruit_based' and a.TOTAL_ORDER > 3000
order by a.TOTAL_ORDER desc;

-- select * from FIRST_HALF;