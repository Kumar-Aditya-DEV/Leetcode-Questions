# Write your MySQL query statement below
SELECT customer_number FROM Orders GROUP BY customer_number ORDER BY count(1) DESC LIMIT 1;