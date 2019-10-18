# Gets average employee experience years of all employees
# per project, rounded to 2 digits

SELECT project_id, ROUND(AVG(experience_years), 2) AS average_years FROM
Project AS p JOIN Employee AS e
on (p.employee_id = e.employee_id)
GROUP BY project_id;
