CREATE DATABASE sistema;

USE sistema;

CREATE TABLE categorias(
id INT NOT NULL AUTO_INCREMENT,
nome VARCHAR(15),
ativo BOOL,
PRIMARY KEY(id)
);

DESCRIBE categorias;

+-------+-------------+------+-----+---------+----------------+
| Field | Type        | Null | Key | Default | Extra          |
+-------+-------------+------+-----+---------+----------------+
| id    | int(11)     | NO   | PRI | NULL    | auto_increment |
| nome  | varchar(15) | YES  |     | NULL    |                |
| ativo | tinyint(1)  | YES  |     | NULL    |                |

INSERT INTO categorias VALUES (0,'casa',1), (0,'apartamento',1), (0,'terreno',1), (0,'galpão',1), (0,'flat',1);

SELECT * FROM CATEGORIAS;

+----+-------------+-------+
| id | nome        | ativo |
+----+-------------+-------+
|  1 | casa        |     1 |
|  2 | apartamento |     1 |
|  3 | terreno     |     1 |
|  4 | galpão      |     1 |
|  5 | flat        |     1 |
+----+-------------+-------+

CREATE TABLE imoveis(
	id INT NOT NULL AUTO_INCREMENT,
	nome VARCHAR(60),
	ativo BOOL DEFAULT 1,
	PRIMARY KEY (id)
);