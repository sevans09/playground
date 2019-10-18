# Query that reports all product names of the products
# in the Sales table along with their selling year and price.

SELECT product_name, year, price FROM 
Product AS p JOIN Sales AS s 
ON (p.product_id  = s.product_id);
