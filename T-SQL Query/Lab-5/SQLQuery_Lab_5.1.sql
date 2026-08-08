--Part –> A
--1. Delete all the records having amount less than or equal to 3000.
SELECT * FROM BANK_DEPOSIT

DELETE FROM BANK_DEPOSIT
WHERE BALANCE <= 3000

--2. Delete all the accounts of ‘BEDI’ branch customer.

DELETE FROM BANK_DEPOSIT
WHERE BRANCH_NAME = 'BEDI'


--3. Delete all the accounts having account number greater than 102 and less than 109.

DELETE FROM BANK_DEPOSIT
WHERE ANO > 102 AND ANO <109 

--4. Delete all the accounts whose branch is ‘BEDI’ or ‘MADHAPAR’.

DELETE FROM BANK_DEPOSIT
WHERE BRANCH_NAME = 'BEDI' OR BRANCH_NAME = 'MADHAPAR'

--5. Delete all the accounts details where amount is 8000 and account open after 1-1-2025.

DELETE FROM BANK_DEPOSIT
WHERE BALANCE = 8000

--6. Delete all the accounts whose account branch is NULL.

DELETE FROM BANK_DEPOSIT
WHERE BRANCH_NAME IS NULL

--7. Delete all the accounts details where amount is 7000 and name is CHARMI and branch is SHITAL PARK.

DELETE FROM BANK_DEPOSIT
WHERE BALANCE = 7000 AND CUSTOMER_NAME = 'CHARMI' AND BRANCH_NAME = 'SHITAL PARK'

--8. Delete all the remaining records using DELETE command.

DELETE FROM BANK_DEPOSIT

--9. Delete all the records of DEPOSIT table. (Use TRUNCATE)

TRUNCATE TABLE BANK_DEPOSIT

--10. Remove DEPOSIT table. (Use DROP)

DROP TABLE BANK_DEPOSIT


--Part –> B
--11. Delete all the students whose stdid is greater than 105.

SELECT * FROM STUDENT

DELETE FROM STUDENT
WHERE STDID > 105

--12. Delete the records whose branch is NULL and sname is not NULL.

DELETE FROM STUDENT
WHERE BRANCH IS NULL AND SNAME IS NOT NULL 

--13. Delete the records whose SPI is less than 9 and city is RAJKOT.

DELETE FROM STUDENT
WHERE SPI < 9 AND CITY = 'RAJKOT'

--14. Delete the records whose branch name is not empty.

DELETE FROM STUDENT
WHERE BRANCH IS NOT NULL

--15. Delete all the records of STUDENT table. (Use TRUNCATE)

TRUNCATE TABLE STUDENT