# Write your MySQL query statement below
# 21/07
-- SELECT LEFT(trans_date, 7) AS month,
--     country,
--     count(*) AS trans_count,
--     sum(state = 'approved') AS approved_count,
--     sum(amount) AS trans_total_amount,
--     sum(CASE WHEN state = 'approved' THEN amount ELSE 0 END) AS approved_total_amount
-- FROM Transactions
-- GROUP BY month, country;

select left(trans_date, 7) as month,
country,
count(*) as trans_count,
sum(state = 'approved') as approved_count,
sum(amount) as trans_total_amount,
sum(case when state = 'approved' then amount else 0 end) as approved_total_amount
from Transactions
group by month, country;






