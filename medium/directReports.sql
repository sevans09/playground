# Find managers with at least 5 direct reports 
SELECT name 
FROM   employee AS manager 
       JOIN (SELECT managerid, 
                    Count(managerid) AS counter 
             FROM   employee 
             GROUP  BY managerid) AS employees 
         ON ( employees.managerid = manager.id ) 
WHERE  counter > 4; 
