CREATE DATA kiatbevi

CREATE TABLE musteriler(
	musteri_id int not null identity(1,1),
	musteri_ad nvarchar(20) not null,
	musteri_soyad nvarchar(20) not null,
	musteri_gsm char(10) not null,
	musteri_ilce_id int not null,
	musteri_sira_no int not null,
	PRIMARY KEY (musteri_id));

INSERT INTO musteriler values 
	('CANAN', 'TÜRKOĞLU', '5478965412', 2, 25),
	('FARUK', 'YAZICIOĞLU', '5478965412', 2, 30),
	('İSMET', 'YURT', '5412354716', 34, 47),
	('DİCLE', 'OĞULLARI', '5123648954', 12, 100),
	('ALİ', 'BEYOĞLU', '5897459654', 50, 101),
	('FURKAN', 'KAZANA', '5412898965', 1, 187);

EXEC sp_rename 'musteriler', 'tbl_musteriler';

ALTER TABLE tbl_musteriler ADD musteri_kayit_tarih date

ALTER TABLE tbl_musteriler DROP COLUMN musteri_kayit_tarih;

CREATE TABLE tbl_personeller(
	personel_ad nvarchar(20) not null,
	personel_soyad nvarchar(20) not null,
	personel_gsm char(10) not null,
	personel_ilce_id int not null,
	personel_sira_no int not null);

SELECT * FROM tbl_personeller;

ALTER TABLE tbl_personeller ADD personel_id int not null PRIMARY KEY

SELECT * FROM tbl_musteriler;

UPDATE tbl_musteriler set musteri_gsm = '5555555555' WHERE musteri_soyad LIKE '%KARA%'

SELECT * FROM tbl_musteriler;

-------------------------------------------------------------------

CREATE DATABASE firma;


CREATE TABLE personel(
	personel_id int not null identity(1,1),
	sicil_no int not null,
	personel_name nvarchar(20) not null,
	personel_surname nvarchar(20) not null,
	gelir int not null,
	personel_dt date not null
);

ALTER TABLE personel 
ADD department nvarchar(20) not null

INSERT INTO personel VALUES (100, 'ALİ', 'KARALAR', 27658, '2026-04-11', 'İK');
INSERT INTO personel VALUES (101, 'KAHRAMAN', 'FARUK', 524789, '2026-03-11', 'YAZILIM');
INSERT INTO personel VALUES (102, 'FARUK', 'ÜRKEK', 247894, '2025-04-11', 'MÜŞTERİ HİZMETLERİ');
INSERT INTO personel VALUES (103, 'AHMET', 'YILMAZ', 47895, '2026-02-01', 'AR-GE');
INSERT INTO personel VALUES (104, 'MERT', 'CAN', 28595, '2024-04-11', 'BİLGİ İŞLEM');
INSERT INTO personel VALUES (105, 'ENES', 'KOTUN', 98475, '2022-11-11', 'FİNANS');

SELECT * 
FROM personel

SELECT p.personel_name, p.personel_surname, p.gelir, p.department 
FROM personel p 
WHERE p.gelir > 30000

UPDATE personel 
SET department = 'İK' 
WHERE personel_id = 5

SELECT * 
FROM personel

SELECT p.personel_name, p.personel_surname, p.gelir 
FROM personel p 
WHERE p.personel_name LIKE 'A%'

SELECT p.personel_name, p.personel_surname, p.gelir, p.department 
FROM personel p 
WHERE p.personel_name LIKE 'A%' AND p.personel_surname LIKE '%Z'

SELECT p.personel_name, p.personel_surname, p.gelir, p.department 
FROM personel p 
WHERE p.personel_name LIKE 'A%' OR p.personel_surname LIKE '%Z'

SELECT p.personel_name, p.personel_surname, p.personel_dt
FROM personel p
WHERE p.personel_dt LIKE '%5%'

--------------------------------------------------------------------------

CREATE DATABASE firma

CREATE TABLE employee(
	id int not null,
	firstname nvarchar(20) not null,
	lastname nvarchar(20) not null,
	money int not null,
	department nvarchar(20) not null,
	department_id int not null);

INSERT INTO employee
VALUES
(100, 'MUSTAFA', 'KAYA', 90000, 'YAZILIM', 1),
(101, 'MURAT', 'AKCAY', 70000, 'TASARIM', 2),
(102, 'HAKAN', 'BURAK', 75000, 'YAZILIM', 1),
(103, 'MİNE', 'KIYGIN', 80000, 'DONANIM', 3),
(104, 'UĞUR', 'DEYA', 40000, 'YAZILIM', 1),
(105, 'ÇAĞLA', 'KONAT', 50000, 'İ.K', 4),
(106, 'ELİF', 'AYDIN', 50000, 'TASARIM', 2);

SELECT * FROM employee

SELECT e.firstname, e.lastname, e.money, e.department 
FROM employee e
WHERE e.id BETWEEN 103 AND 110

SELECT e.firstname, e.lastname, e.money, e.department 
FROM employee e
WHERE e.id > 103 AND e.id < 110

SELECT e.firstname, e.lastname, e.money, e.department
FROM employee e
WHERE money BETWEEN 40000 AND 100000 
AND 
e.firstname LIKE '%e%' OR e.lastname LIKE '%k%'

SELECT e.firstname, e.lastname, e.department, e.money AS old_money, e.money + e.money * 0.5 AS new_money
FROM employee e
WHERE e.department_id = 1

SELECT SUM(e.money) AS total_money
FROM employee e
WHERE e.department_id = 2

SELECT SUM(e.money) AS total_money
FROM employee e
WHERE e.firstname LIKE '%a%' AND e.id > 100 AND e.department_id = 1

SELECT AVG(e.money) AS ort 
FROM employee e

SELECT AVG(e.money) AS ort 
FROM employee e
WHERE e.department_id = 1

SELECT (sum(e.money) / AVG(e.money)) AS ort FROM employee e

COUNT ile
SELECT COUNT(e.id)
FROM employee e

----------------------------------------------------------------------------------------------------

SELECT MAX(p.price) as TasarımMaxGelir
FROM personel p
WHERE p.department_id = 2;

SELECT MAX(p.price) as En_yusek_gelir
FROM personel p
WHERE p.id BETWEEN 103 AND 105

SELECT MIN(p.price) AS 'En_dusuk_maas'
FROM personel p
WHERE p.surname LIKE '%A%'
AND
p.id > 103

SELECT * INTO YAZILIMCILAR
FROM personel p
WHERE p.price > 30000 AND p.department_id = 1

SELECT * 
FROM YAZILIMCILAR

SELECT p.name, p.surname, p.price
INTO AZGELIRLILER
FROM personel p
WHERE p.price < 50000

SELECT * FROM AZGELIRLILER

SELECT TOP 5 p.name, p.surname, p.price, p.department
FROM personel p
WHERE p.price > 50000

SELECT DISTINCT *
FROM personel

SELECT COUNT(*) AS toplam_kayıt_sayısı
FROM personel

SELECT COUNT(DISTINCT p.price)
AS FARKLI_gelir_sayisi
FROM personel p

SELECT COUNT(p.price) AS YAZILIMCILAR
FROM personel p 
WHERE p.department_id = 1 AND p.price > 50000

SELECT (p.name + ' ' + p.surname) AS 'ad_soyad', p.department, (p.price + (p.price * 0.20)) AS 'yeni_maas', p.price as 'eski_maas'
FROM personel p
WHERE p.price < 50000

SELECT p.name, p.surname, p.price, p.department
FROM personel p
WHERE p.department_id = 1
ORDER BY p.price DESC

SELECT p.name, p.surname, p.price, p.department
FROM personel p
WHERE p.department_id = 1
ORDER BY p.price ASC

SELECT p.name, p.surname, p.department, p.price AS eski_gelir, (p.price * 1.40) AS yeni_gelir
FROM personel p
WHERE p.price < 50000
ORDER BY p.price DESC

SELECT p.Department, COUNT(p.id) as Calisan_Sayi
FROM personel p
GROUP BY p.department

SELECT p.department, COUNT(p.id) AS kisi_sayi
FROM personel p
WHERE p.price > 70000
GROUP BY p.department

SELECT p.department, MAX(p.price) AS maas
FROM personel p 
GROUP BY p.department 
ORDER BY maas ASC

SELECT p.name, p.surname, p.price, p.department
FROM personel p
WHERE p.price = (SELECT MAX(p.price) FROM personel p)

SELECT p.department
FROM personel p
GROUP BY p.department
HAVING COUNT(p.id) > 3

SELECT p.name, p.surname, p.department, p.price
FROM personel p
WHERE p.price > (SELECT AVG(p.price) FROM personel p)
AND
p.department IN 
(SELECT p.department 
FROM personel p
GROUP BY p.department
HAVING AVG(p.price) > 50000)