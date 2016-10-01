<html>
	<head>
		<title>Listagem de Categorias</title>
	</head>
	<body>
	<?php
	//Conectando ao MySQL					//se n�o conseguir estabelecer uma conex�o, die exibe uma msg de erro
	$con = mysqli_connect('localhost','root','') or die ("01 - Erro na conex�o com o MySqlServer: " . mysqli_error($con));
	
	//Selecionando o BD mysqli_select_db(conexao,nomeBD)
	mysqli_select_db($con, "sistema") or die ("02 - Erro na sele��o do BD: " . mysqli_error($con));
	
	// Consultando as categorias ativas 
	$sql = "SELECT * FROM categorias WHERE ativo=1 ORDER BY nome";
	
	/*Morre para mostrar o comando na tela
		die($sql);
	*/
	
	//Fazendo a consulta mysqli_query(conexao, qualquer comando SQL)
	//rs - RECORD SET - CONJUNTO DE REGISTRO
	$rs = mysqli_query($con, $sql) or die ("03 - Erro na consulta de dados da tabela categorias" . myslqi_error($con));
	
	//Recebendo numero de linhas mysqli_num_rows($conjuntoRegistro);
	$linhas = mysqli_num_rows($rs);
	
	echo "N�mero de linhas da consulta: " . $linhas . "<br><br>";
	
	//Varrendo dados
	//for( $n=0; $n<$linhas; $n++ )
	//{
		//mysqli_fetch_array($conjuntoRegistro) l� uma linha de registro inteira e incrementa +1 para ir para a pr�xima
		//$dados � uma array com todos os dados da consulta, pode ser associativa ou n�o
		//$dados = mysqli_fetch_array($rs, 1);
		//$dados["nomeColunaDoBD"]
		//echo "Nome:".$dados["nome"] . "<br>";
		//echo "C�digo:".$dados["codigo"] . "<br>";
		//echo "Ativo:".$dados["ativo"] . "<br><br>";
	//}
	?>
		<!-- Unordered List -->
		<ul>
		<?php
		for( $n=0; $n<$linhas; $n++ )
	{
		//mysqli_fetch_array($conjuntoRegistro) l� uma linha de registro inteira e incrementa +1 para ir para a pr�xima
		//$dados � uma array com todos os dados da consulta, pode ser associativa ou n�o
		$dados = mysqli_fetch_array($rs, 1);
		//$dados["nomeColunaDoBD"]
		$nome = $dados["nome"];
		echo "<li>$nome</li>";
	}
			
		?>
		</ul>
	</body>
</html>