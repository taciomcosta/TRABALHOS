<?php
	$nomeBanco = "sistema";

	// 1 - Conectar no MYSQL
	$con = mysqli_connect( "localhost", 
							"root", 
							"") or
		die("1 - Erro");
	
	// 2 - Selecionar o banco
	mysqli_select_db($con , $nomeBanco ) or
		die("2 - Erro");
?>