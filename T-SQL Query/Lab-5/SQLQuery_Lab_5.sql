--Part –> A

--1. Add column state varchar(20).

SELECT * FROM BANK_DEPOSIT
ALTER TABLE DEPOSIT
ADD STATE VARCHAR(20)

--2. Add two more columns city varchar(20) and pincode int.

ALTER TABLE DEPOSIT
ADD CITY VARCHAR(20), PINCODE INT

--3. Change the size of cname column from varchar(50) to varchar(35).

ALTER TABLE DEPOSIT
ALTER COLUMN CNAME VARCHAR(35)

--4. Change the data type of amount from decimal to int.

ALTER TABLE DEPOSIT
ALTER COLUMN AMOUNT INT

--5. Delete column city from the DEPOSIT table.

ALTER TABLE DEPOSIT
DROP COLUMN CITY

--6. Rename column actno to ano.

SP_RENAME 'DEPOSIT.ACTNO','ANO'

--7. Rename column bname to branch_name.

SP_RENAME 'DEPOSIT.BNAME','BRANCH_NAME'

--8. Rename table DEPOSIT to DEPOSIT_DETAIL.

SP_RENAME 'DEPOSIT','DEPOSIT_DETAIL'

--9. Add column ifsc_code varchar(15).

ALTER TABLE DEPOSIT_DETAIL
ADD IFSC_CODE VARCHAR(15)

--10. Change the size of bname column from varchar(50) to varchar(30).

ALTER TABLE DEPOSIT_DETAIL
ALTER COLUMN BRANCH_NAME VARCHAR(30)


--Part –> B

--11. Rename column adate to aopendate.

SP_RENAME 'DEPOSIT_DETAIL.ADATA','AOPENDATE'

--12. Delete column aopendate from DEPOSIT_DETAIL table.

ALTER TABLE DEPOSIT_DETAIL
DROP COLUMN AOPENDATE

--13. Rename column cname to customer_name.

SP_RENAME 'DEPOSIT_DETAIL.CNAME','CUSTOMER_NAME'

--14. Add column country varchar(20).

ALTER TABLE DEPOSIT_DETAIL
ADD COUNTRY VARCHAR(20)

--15. Add column account_type varchar(15).

ALTER TABLE DEPOSIT_DETAIL
ADD ACCOUNT_TYPE VARCHAR(15)


--Part –> C
--16. Change data type of pincode from int to bigint.

ALTER TABLE DEPOSIT_DETAIL
ALTER COLUMN PINCODE BIGINT

--17. Delete column account_type.

ALTER TABLE DEPOSIT_DETAIL
DROP COLUMN ACCOUNT_TYPE

--18. Rename column amount to balance.

SP_RENAME 'DEPOSIT_DETAIL.AMOUNT','BALANCE'

--19. Add column status varchar(10).

ALTER TABLE DEPOSIT_DETAIL
ADD STATUS VARCHAR(10)

--20. Change table name deposit_detail to bank_deposit.

SP_RENAME 'DEPOSIT_DETAIL','BANK_DEPOSIT'