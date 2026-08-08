--Part –> A
--1. Display the Highest, Lowest Salary and Label the columns Maximum, Minimum respectively.

SELECT * FROM EMPLOYEE

SELECT MAX(SALARY) AS MAX_SALARY
FROM EMPLOYEE

SELECT MIN(SALARY) AS MIN_SALARY
FROM EMPLOYEE

--2. Display Total, and Average salary of all employees. Label the columns Total_Sal and Average_Sal,respectively.

SELECT SUM(SALARY) AS TOTAL_SAL
FROM EMPLOYEE

SELECT AVG(SALARY) AS AVERAGE_SAL
FROM EMPLOYEE

--3. Find total number of employees of EMPLOYEE table.

SELECT COUNT(*) 
FROM EMPLOYEE

--4. Find highest salary from Rajkot city.

SELECT MAX(SALARY) AS MAX_SALARY_RAJKOT
FROM EMPLOYEE
WHERE CITY = 'RAJKOT'

--5. Give maximum salary from IT department.

SELECT MAX(SALARY) AS MAX_SALARY_DEPARTMENT
FROM EMPLOYEE
WHERE DEPARTMENT = 'IT'

--6. Count employee department is HR.

SELECT COUNT(DEPARTMENT)
FROM EMPLOYEE
WHERE DEPARTMENT = 'HR'

--7. Display average salary of Admin department.

SELECT AVG(SALARY) AS AVERAGE_SALARY_ADMIN
FROM EMPLOYEE
WHERE DEPARTMENT = 'ADMIN'

--8. Display total salary of HR department.

SELECT SUM(SALARY) AS TOTAL_SALARY_DEPARTMENT
FROM EMPLOYEE
WHERE DEPARTMENT = 'HR'

--9. Count total number of cities of employee without duplication.

SELECT CITY,COUNT(CITY) AS CITY_COUNT
FROM EMPLOYEE
GROUP BY CITY

--10. Count unique departments.

SELECT DEPARTMENT,COUNT(DEPARTMENT) AS UNIQUE_DEPARTMENT
FROM EMPLOYEE
GROUP BY DEPARTMENT

--11. Display minimum salary of employee who belongs to Ahmedabad.

SELECT MIN(SALARY) AS MINIMUM_SALARY_AMD
FROM EMPLOYEE
WHERE CITY = 'AHMEDABAD'

--12. Find city wise highest salary.

SELECT CITY,MAX(SALARY) AS HIGHEST_SALARY_CITYWISE
FROM EMPLOYEE
GROUP BY CITY

--13. Find department wise lowest salary.

SELECT DEPARTMENT,MIN(SALARY) AS LOWEST_SALARY_DEPARTMENTWISE
FROM EMPLOYEE
GROUP BY DEPARTMENT

--14. Display minimum salary in each city.

SELECT CITY,MIN(SALARY) AS MINIMUM_SALARY_CITYWISE
FROM EMPLOYEE
GROUP BY CITY

--15. Display average salary of employees from Surat.

SELECT AVG(SALARY) AS AVERAGE_SALARY_SURAT
FROM EMPLOYEE
WHERE CITY = 'SURAT'

--16. Display total salary of female employees.

SELECT SUM(SALARY) AS TOTAL_SALARY_FEMALE
FROM EMPLOYEE
WHERE GENDER = 'FEMALE'

--17. Count number of male employees.

SELECT COUNT(GENDER) AS MALE_COUNT
FROM EMPLOYEE
WHERE GENDER = 'MALE'

--18. Display city with the total number of employees belonging to each city.

SELECT CITY,COUNT(EID) AS EMPLOYEE_COUNT
FROM EMPLOYEE
GROUP BY CITY

--19. Count number of employees in each city where gender is MALE.

SELECT CITY,COUNT(EID) AS GENDER_MALE
FROM EMPLOYEE
WHERE GENDER = 'MALE'
GROUP BY CITY

--20. Display maximum salary in each department where city is not Ahmedabad.

SELECT DEPARTMENT,MAX(SALARY) AS MAXIMUM_SALARY_NOTAMD
FROM EMPLOYEE
WHERE CITY != 'AHMEDABAD'
GROUP BY DEPARTMENT


--Part –> B
--21. Display minimum salary in each city where gender is FEMALE.

SELECT CITY,MIN(SALARY) AS CITYIWISE_MIN_SALARY
FROM EMPLOYEE
WHERE GENDER = 'FEMALE'
GROUP BY CITY

--22. Give total salary of each department of EMPLOYEE table.

SELECT DEPARTMENT,SUM(SALARY) AS SUM_DEPARTMENTWISE
FROM EMPLOYEE
GROUP BY DEPARTMENT

--23. Give average salary of each department of EMPLOYEE table without displaying the respective department name.

SELECT AVG(SALARY) AS AVERAGE_SALARY
FROM EMPLOYEE
GROUP BY DEPARTMENT

--24. Count the number of employees for each department in every city.

SELECT CITY,DEPARTMENT,COUNT(EID) AS COUNT_EID
FROM EMPLOYEE
GROUP BY CITY,DEPARTMENT

--25. Calculate the total salary distributed to male and female employees.

SELECT GENDER,SUM(SALARY) AS SUM_GENDERWISE
FROM EMPLOYEE
GROUP BY GENDER


--Part –> C
--26. Give city wise maximum and minimum salary of female employees.

SELECT MAX(SALARY) AS MAXIMUM_SALARY
FROM EMPLOYEE
WHERE GENDER = 'FEMALE'

SELECT MIN(SALARY) AS MANIMUM_SALARY
FROM EMPLOYEE
WHERE GENDER = 'FEMALE'

--27. Calculate department, city, and gender wise average salary.

SELECT DEPARTMENT,CITY,GENDER,AVG(SALARY) AS AVERAGE_SALARY
FROM EMPLOYEE
GROUP BY DEPARTMENT,CITY,GENDER

--28. Display the difference between the highest and lowest salaries. Label the column DIFFERENCE.

SELECT MAX(SALARY) - MIN(SALARY) AS DIFFERENCE 
FROM EMPLOYEE

--29. Display sum of salaries of department wise where department name consist 5 letter.

SELECT DEPARTMENT,SUM(SALARY) AS SUM_SALARY
FROM EMPLOYEE
WHERE DEPARTMENT LIKE '_____'
GROUP BY DEPARTMENT

--30. Find the Maximum salary department & city wise in which city name starts with ‘R’.

SELECT CITY,DEPARTMENT,MAX(SALARY) AS MAXIMUM_SALARY
FROM EMPLOYEE
WHERE CITY LIKE 'R%'
GROUP BY DEPARTMENT, CITY