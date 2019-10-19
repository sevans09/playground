# Finds the biggest number that only appears once

SELECT MAX(num) as num FROM (
    
    SELECT num
    FROM my_numbers
    GROUP BY num
    HAVING COUNT(num) = 1
   
) as findMax;
