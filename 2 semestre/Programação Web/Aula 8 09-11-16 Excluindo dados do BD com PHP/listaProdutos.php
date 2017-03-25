<?php
	// salvei como listaProdutos.php
	// 1 - Conex�o e sele��o
	include "conexao.php";
	
	// 2 - Recuperar os dados da tabela
	$sql="SELECT * FROM produtos WHERE ativo=1";
	//die($sql);
	
	$rs = mysqli_query($con , $sql) or 
		die("3 - Erro");
	
	// 3 - Mostrar na tela
	// 3.1 - Contar o n�mero de linhas
	$linhas = mysqli_num_rows($rs);
	
	if($linhas <1)
		die("Tabela est� vazia!!");

	echo "<table border='1'>";
	echo "	<tr bgcolor='pink'>";
	echo "		<th>C�digo</th>";
	echo "		<th>Nome</th>";
	echo "		<th>Pre�o</th>";
	echo "		<th colspan='2'>A��es</th>";
	echo "	</tr>";
	
	for($n = 0 ; $n <$linhas ; $n++)
	{
		$dados = mysqli_fetch_array($rs , 1) ;
		$codigo 	= $dados['codigo'];
		$nome 		= $dados['nome'];
		$preco 		= $dados['precovenda'];
		
		echo "	<tr>";
		echo "		<td align='center'> $codigo </td>";
		echo "		<td width='250'> $nome </td>";
		echo "		<td width='80' align='right'> $preco </td>";
		echo '		<td> Alterar </td>' ;
		echo "		<td> <a href='excluirProduto.php?cod=$codigo&n=$nome'>Excluir</a> </td>" ;
		echo "	</tr>";
		
		/*
		$dados['ativo']
		$dados['foto']
		$dados['descricao']
		$dados['cadastro']
		*/
	}
	echo "</table>";

	
?>

