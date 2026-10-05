# Write your MySQL query statement below
# 21/07
-- SELECT * 
-- FROM Cinema 
-- WHERE (id%2 != 0) AND (description != 'boring')
-- ORDER BY rating DESC;

# 05/08/2026
select * from Cinema
where (id % 2 != 0) and (description != 'boring')
order by rating desc;