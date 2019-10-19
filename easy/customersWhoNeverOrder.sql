# Finds customers who never order anything


SELECT Name as Customers FROM
Customers AS c LEFT JOIN Orders AS o
ON (c.Id = o.CustomerId)
WHERE o.Id IS NULL;
