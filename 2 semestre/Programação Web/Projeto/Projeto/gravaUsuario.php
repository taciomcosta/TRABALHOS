<!DOCTYPE html>
<meta charset="UTF-8" />

<?php
 header('Content-Type: text/html; charset=utf-8');
	// Obtendo dados do formulário
	$nome = $_POST['nome'];
	$email = strtolower($_POST['email']);
	$senha = $_POST['senha'];

	//Conectando ao MySQL
	include_once("conexao.php");

	//Inserindo dados
	$query = "INSERT INTO usuarios VALUES (NULL, '$nome', '$email', '$senha', 3)";

	$sql = mysqli_query($conn,$query) or die("Erro ao gravar");

	//Fechando conexão
	mysqli_close($conn);

	//Redirencionando
	?>
		<script>
			alert("Cadastro realizado com sucesso!");
		</script>
	<?php

	// Redireciona para a página incial depois de 0.5 segundo
	header("refresh: 0.5;index.php");

?>