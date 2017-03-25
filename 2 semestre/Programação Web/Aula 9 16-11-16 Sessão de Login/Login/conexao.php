<?php
	$banco = "sistema";
	$endereco="localhost";
	$usuario="root";
	$senha="";
	$con = mysqli_connect(	$endereco,
							$usuario,
							$senha) or 
		die("Erro 1");
		
	mysqli_select_db($con , $banco) or 
		die("Erro 2");
?>