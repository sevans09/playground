# Combines Person and Address tables regardless of each
# person having an address

SELECT FirstName, LastName, City, State
FROM Person 
LEFT JOIN Address
USING (PersonId);
