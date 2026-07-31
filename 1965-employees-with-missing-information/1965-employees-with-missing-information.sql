# Write your MySQL query statement below
SELECT employee_id From Employees WHERE employee_id NOT IN ( SELECT employee_id FROM Salaries)
UNION
SELECT employee_id FROM salaries WHERE employee_id NOT IN ( SELECT employee_id FROM Employees)
ORDER BY employee_id;