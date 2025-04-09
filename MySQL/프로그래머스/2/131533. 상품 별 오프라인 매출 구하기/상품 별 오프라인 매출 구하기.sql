-- 코드를 입력하세요
SELECT a.PRODUCT_CODE, a.PRICE * sum(b.SALES_AMOUNT) as SALES from PRODUCT  as a, OFFLINE_SALE as b
where a.PRODUCT_ID=b.PRODUCT_ID
group by PRODUCT_CODE
order by SALES desc,PRODUCT_CODE asc;