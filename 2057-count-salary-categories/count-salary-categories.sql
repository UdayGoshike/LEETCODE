# Write your MySQL query statement below
-- SELECT CASE WHEN income<20000 THEN 'Low Salary' WHEN income<=50000 THEN 'Average Salary' ELSE 'High Salary' END as category,count(*) as accounts_count FROM Accounts group by category;
-- THIS CANNOT SHOW CATEGORY WITH ZERO;
SELECT 'Low Salary' as category,count(*) as accounts_count FROM Accounts WHERE income<20000
union 
SELECT 'Average Salary' as category,count(*) as accounts_count FROM Accounts WHERE income BETWEEN 20000 AND 50000
union 
SELECT 'High Salary' as category,count(*) as accounts_count FROM Accounts WHERE income>50000;       

