<html>
	<head>
		<title>Lista de Categorias</title>
	</head>
	<body>
		<!-- Lista n�o ordenada-->
		<ul>
		<?php
			// 1 - Conectando-se ao MySQL Server
			//$objConexao = mysqli_connect('Endere�o do servidor', 'Usu�rio', 'Senha') <-- retorna um objeto de conex�o;
			//mysqli_error($objConexao) --> retorna o erro;
			$con = mysqli_connect('localhost', 'root', '') or die( "Erro: " . mysqli_error($con) );
			
			//2 - Selecionando o Banco de Dados
			//mysqli_select_db($objConexao, 'nomeBD');
			mysqli_select_db($con, 'sistema') or die("Erro: " . mysqli_error($con) );
			
			//3 - Criar v�riavel com o comando SQL (String)
			$sql = "SELECT * FROM categorias ORDER BY nome";
			
			//4 - Consultando os dados
			//$objResultado = mysqli_query($objConexao, $comandoSQL); <-- retorna um objResultado, como um array
			$rs = mysqli_query($con, $sql) or die("Erro: " . mysqli_error($con));
			
			//5 - Percorrendo o $objResultado, em cada linha, para mostrar a categoria
			
				//Obtendo o n�mero de linhas da consulta
				//$numeroLinhas = mysqli_num_rows($objResultado); <-- retorna o n�mero de linhas
				$linhas = mysqli_num_rows( $rs );
				
				//Percorrendo o $objResultado com FOR
				for($n=0; $n < $linhas; $n++)
				{
					//Jogando os dados da linha atual dentro da array $dados
					//$arrayDados = mysqli_fetch_array($objResultado, 1 para nome da coluna/ 2 para numera��o da coluna); <-- Retorna uma linha na forma de array e incrementa +1 para a pr�xima vez que for executada
					$dados = mysqli_fetch_array($rs, 1);
					//coluna nome 
					$categoria = $dados["nome"];
					echo "<li>$categoria</li>";
					
					//
					
				}
			
		?>
		
	</body>
</html>