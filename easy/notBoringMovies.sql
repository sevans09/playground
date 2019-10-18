# Selects all movies from cinema table where description is not
# 'boring' and id number is odd

SELECT * 
FROM cinema
WHERE (description != 'boring' AND MOD(id, 2) != 0)
ORDER BY rating DESC;
