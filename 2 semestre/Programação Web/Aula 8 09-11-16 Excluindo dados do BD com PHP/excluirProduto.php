<html>
	<head>
		<title>Exclusão de produto</title>
	</head>
	<body>
	<?php


	//Pegando o código e o nome do produto pelo método GET
	//$_GET['variavel que contém o dado passado na URL']
	$codigo = $_GET['cod'];
	$nome	= $_GET['n'];
	echo "Vou excluir o produto [$codigo] - $nome <br>" ;

	//Incluindo o arquivo que contém a conexão ao BD
	include "conexao.php";
	$sql = 	"DELETE FROM produtos WHERE codigo=$codigo";
	//die($sql);
	
	//Excluindo o produto
	//Não precisa de uma var para mysqli_query, pois não é uma consulta
	mysqli_query($con, $sql) or 
		die("erro na eliminação de dados");
		
	echo "Produto $nome eliminado!<hr>";
	?>
	
	Clique <a href="listaProdutos.php">aqui</a>
	para voltar à Listagem de Produtos.
	</body>
</html>