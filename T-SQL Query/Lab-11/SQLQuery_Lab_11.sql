--Date Functions

--Part –> A

--1. Write a query to display the current date & time. Label the column Today_Date.

SELECT GETDATE() AS TODAY_DATE

--2. Write a query to find new date after 365 day with reference to today.

SELECT DATEADD(DAY,365,GETDATE()) AS NEW_DATE

--3. Display the current date in a format that appears as may 5 1994 12:00AM.

SELECT FORMAT(GETDATE(),'MMMM dd yyyy HH:mm:tt') AS DATE_FORMAT

--4. Display the current date in a format that appears as 03 Jan 1995.

SELECT FORMAT(GETDATE(),'dd MMMM yyyy') AS ANOTHER_DATE_FORMAT

--5. Display the current date in a format that appears as Jan 04, 96.

SELECT FORMAT(GETDATE(),'MMMM dd, yy') AS DATE_FORMAT

--6. Write a query to find out total number of months between 31-Dec-08 and 31-Mar-09.

SELECT DATEDIFF(MONTH,'31-DEC-08','31-MAR-09') AS DATE_DIFF

--7. Write a query to find out total number of hours between 25-Jan-12 7:00 and 26-Jan-12 10:30.

SELECT DATEDIFF(HOUR,'25-Jan-12 7:00','26-Jan-12 10:30') AS DATE_DIFF 

--8. Write a query to extract Day, Month, Year from given date 12-May-16.

SELECT DATEPART(DAY,'12-May-16') AS DAY_FORMAT
SELECT DATEPART(MONTH,'12-May-16') AS MONTH_FORMAT
SELECT DATEPART(YEAR,'12-May-16') AS YEAR_FORMAT

--9. Write a query that adds 5 years to current date.

SELECT DATEADD(YEAR,5,GETDATE()) AS FIVE_YR

--10. Write a query to subtract 2 months from current date.

SELECT DATEADD(MONTH,-2,GETDATE()) AS TWO_MONTH_BACK

--11. Extract month from current date using datename () and datepart () function.

SELECT DATENAME(MONTH,GETDATE()) AS DATENAME_MONTH
SELECT DATEPART(MONTH,GETDATE()) AS DATENAME_MONTH

--12. Write a query to find out last date of current month.

SELECT EOMONTH(GETDATE()) AS LAST_DATE

--13. Calculate your age in years and months.

SELECT DATEDIFF(YEAR,'2007-09-24','2026-07-13') AS YEAR_DIFF
SELECT DATEDIFF(MONTH,'2007-09-24','2026-07-13') AS MONTH_DIFF


--Part –> B Perform following queries on DEPOSIT table.

SELECT * FROM DEPOSIT

--14. Display all records where account date is in the year 2025.

SELECT *
FROM DEPOSIT
WHERE YEAR(ADATA) = 2025

--15. Display all records where account date is in the month of March.

SELECT *
FROM DEPOSIT
WHERE MONTH(ADATA) = 03

--16. Display records where account date is after ‘01-Jan-2025’.

SELECT *
FROM DEPOSIT
WHERE (ADATA) > '01-01-2025'

--17. Display records where account date is before ‘01-Jan-2025’.

SELECT *
FROM DEPOSIT
WHERE (ADATA) < '01-01-2025'

--18. Display records where day of account date is 1.

SELECT * 
FROM DEPOSIT
WHERE DAY(ADATA) = 1

--19. Display records where month of account date is greater than 6.

SELECT *
FROM DEPOSIT
WHERE MONTH(ADATA) > 6

--20. Display records where year of account date is 2026.

SELECT *
FROM DEPOSIT
WHERE YEAR(ADATA) = 2026

--21. Display number of accounts opened in each year.

SELECT YEAR(ADATA) AS YEAR_, COUNT(*) AS TOTAL_ACCOUNTS
FROM DEPOSIT
GROUP BY YEAR(ADATA)

--22. Display number of accounts opened in each month.

SELECT MONTH(ADATA) AS YEAR_, COUNT(*) AS TOTAL_ACCOUNTS
FROM DEPOSIT
GROUP BY MONTH(ADATA)

--23. Display maximum amount deposited in each year.

SELECT YEAR(ADATA) AS YEAR_, MAX(BALANCE) AS AMOUNT
FROM DEPOSIT
GROUP BY YEAR(ADATA)


--Part –> C

--24. Display minimum amount deposited in each month.

SELECT MONTH(ADATA) AS YEAR_, MIN(BALANCE) AS AMOUNT
FROM DEPOSIT
GROUP BY MONTH(ADATA)

--25. Display total amount deposited in each year.

SELECT YEAR(ADATA) AS YEAR_, SUM(BALANCE) AS AMOUNT
FROM DEPOSIT
GROUP BY YEAR(ADATA)

--26. Display records where account date is between ‘01-Mar-2025’ and ‘31-Dec-2025’.

SELECT ADATA AS DATE
FROM DEPOSIT
WHERE ADATA BETWEEN 01-03-2025 AND 31-12-2025

--27. Display records where account date is in the current year.

SELECT ADATA 
FROM DEPOSIT

--28. Display difference in days between today’s date and account date.