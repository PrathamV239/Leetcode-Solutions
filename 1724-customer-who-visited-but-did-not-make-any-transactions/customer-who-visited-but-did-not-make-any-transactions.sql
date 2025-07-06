SELECT V.customer_id, COUNT(*) AS count_no_trans 
FROM Visits v
LEFT JOIN transactions t
ON v.visit_id = t.visit_id
WHERE  t.transaction_id IS NULL
GROUP BY v.customer_id;
