CREATE DATABASE sistema;

USE sistema;

CREATE TABLE categorias(
	codigo INT AUTO_INCREMENT NOT NULL,
	ativo BOOL,
	nome VARCHAR(15),
	PRIMARY KEY(codigo)
);

SHOW COLUMNS FROM categorias;
ou
DESCRIBE categorias;

INSERT INTO categorias VALUES(NULL,1,"Tabuleiros"), (NULL,1,"Cartas"),(NULL,1,"Praia"),(NULL,1,"Infantil");

SELECT * FROM categorias;

+--------+-------+------------+
| codigo | ativo | nome       |
+--------+-------+------------+
|      1 |     1 | Tabuleiros |
|      2 |     1 | Cartas     |
|      3 |     1 | Praia      |
|      5 |     0 | Infantil   |
+--------+-------+------------+

SELECT nome,ativo FROM categorias;
SELECT nome,ativo FROM categorias ORDER BY nome;

UPDATE categorias SET ativo=1 WHERE codigo=4;

INSERT INTO categorias(campo1, campo2) VALUES (v1, v2);

INSERT INTO categorias VALUES(0,3,"Estranha");

DELETE FROM categorias WHERE codigo=1;
