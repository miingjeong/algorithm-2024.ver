-- 코드를 입력하세요
SELECT distinct(USER_ID),PRODUCT_ID
from ONLINE_SALE 
group by USER_ID,PRODUCT_ID
having count (USER_ID) >= 2
order by USER_ID asc , PRODUCT_ID desc;