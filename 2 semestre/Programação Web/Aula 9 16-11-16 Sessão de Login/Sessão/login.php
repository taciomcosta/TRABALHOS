<?php
	//Iniciando a sessão
	session_start();
	
	//O vetor $_SESSION[''] permite criar variáveis que podem ser utilizadas em outras páginas
	$_SESSION['logado'] = true;
	$_SESSION['nome'] = "Tacio";
	$_SESSION['perfil'] = "C";
	$_SESSION['ultAcesso'] = '16-11-16';

?>

<html>
	<head>
	</head>
	<body>
		<a href="listaProdutos.php">Lista Produtos</a><br>
	</body>
</html>