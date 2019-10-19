# Selects all employee's names and bonuses if bonus < 1000

SELECT name, bonus
FROM Employee 
LEFT JOIN bonus
USING (empId)
WHERE bonus < 1000 OR bonus IS NULL;
