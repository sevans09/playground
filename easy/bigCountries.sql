# Selects all countries with areas greater than 3m square km
# or populations greater than 25m

SELECT name, population, area 
FROM World
WHERE (area > 3000000 or population > 25000000);
