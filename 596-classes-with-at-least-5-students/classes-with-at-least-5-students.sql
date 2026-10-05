# Write your MySQL query statement below
-- 23/07
-- SELECT class 
-- FROM Courses 
-- GROUP BY class
-- HAVING COUNT(class) >= '5';

select class from Courses
group by class
having count(class) >= 5;
