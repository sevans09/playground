# Gets percentage of orders with preferred delivery date same as
# order date.

SELECT  
ROUND((SELECT COUNT(*) 
FROM  Delivery
WHERE order_date = customer_pref_delivery_date) 
/ COUNT(delivery_id) * 100, 2) 
AS immediate_percentage 
FROM Delivery;
