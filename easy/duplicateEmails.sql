# Find duplicate emails in a table

SELECT Email
FROM Person
GROUP BY Email
HAVING COUNT(Email) > 1;
