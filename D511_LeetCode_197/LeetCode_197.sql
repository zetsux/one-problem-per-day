SELECT
  cur.id
FROM
  Weather cur
  INNER JOIN Weather prv ON cur.recordDate = DATE_ADD(prv.recordDate, INTERVAL 1 DAY)
WHERE
  cur.temperature > prv.temperature