CREATE DATABASE SISTEMA ;
USE SISTEMA ;

CREATE TABLE produtos (
 codigo INT AUTO_INCREMENT,
 nome VARCHAR(30),
  foto VARCHAR(50),
 precovenda FLOAT(7,2),
 descricao TEXT,
 ativo BOOL DEFAULT 1,
 cadastro DATE,
 PRIMARY KEY(codigo));

DESCRIBE produtos;
+------------+-------------+------+-----+---------+----------------+
| Field      | Type        | Null | Key | Default | Extra         |
+------------+-------------+------+-----+---------+----------------+
| codigo     | int(11)      | NO   | PRI | NULL    | auto_increment|
| nome       | varchar(30) | YES  |     | NULL    |                |
| foto       | varchar(50) | YES  |     | NULL    |                |
| precovenda | float(7,2)  | YES  |     | NULL    |                |
| descricao  | text         | YES  |     | NULL    |                |
| ativo      | tinyint(1)  | YES  |     | 1       |                |
| cadastro   | date        | YES  |     | NULL    |                 |
+------------+-------------+------+-----+---------+----------------+
INSERT INTO produtos (nome, cadastro, precovenda, descricao, foto) VALUES
('Galaxy S7 Edge', '2016-11-09', 3250.70    , 'Produto Bolado' , 's7edge.png'  );
INSERT INTO produtos (nome, cadastro, precovenda, descricao, foto ) VALUES
('Galaxy Note 5' ,'2016-11-09', 2250.00    , 'Produto da hora' , 'note5.jpg'  );
INSERT INTO produtos (nome, cadastro, precovenda , descricao, foto ) VALUES 
('Macbook Pro'   ,'2016-11-09', 17512.00   , 'Produto baratin' , 'mcbook17.png');

SELECT * FROM produtos;
+--------+----------------+--------------+------------+-----------------+-------+------------+
| codigo | nome           | foto         | precovenda | descricao       | ativo | cadastro   |
+--------+----------------+--------------+------------+-----------------+-------+------------+
|      1 | Galaxy S7 Edge | s7edge.png   |    3250.70 | Produto Bolado  |      1| 2016-11-09 |
|      2 | Galaxy Note 5  | note5.jpg    |    2250.00 | Produto da hora |      1| 2016-11-09 |
|      3 | Macbook Pro    | mcbook17.png |   17512.00 | Produto baratin |      1| 2016-11-09 |
+--------+----------------+--------------+------------+-----------------+-------+------------+   