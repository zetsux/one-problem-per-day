SELECT a.email
FROM Person a
  INNER JOIN Person b ON a.id != b.id AND a.email = b.email
GROUP BY a.email