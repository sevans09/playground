# Finds employees earning more than their managers

SELECT e.Name as Employee FROM
Employee AS e 
JOIN Employee AS m
ON (e.ManagerId = m.Id)
WHERE e.Salary > m.Salary;
