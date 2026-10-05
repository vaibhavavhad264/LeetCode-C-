# Write your MySQL query statement below
# 16/07
-- SELECT name FROM Customer
-- WHERE referee_id IS NULL or referee_id != '2';

-- 05/10/2026

select name from Customer
where (referee_id != 2) or referee_id is null;
