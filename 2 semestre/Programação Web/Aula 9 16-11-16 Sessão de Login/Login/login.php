<?php session_start();
	$login = $_POST['login']; // veio do form
	$senha = $_POST['senha']; // veio do form

	include "conexao.php";
	$sql="SELECT * FROM usuarios WHERE login='$login'";
	//die($sql);
	$rs = mysqli_query( $con , $sql) or
		die("Erro ");
	$linhas = mysqli_num_rows($rs);
	if($linhas<1)
		die("Usuário (a) não encontrado (a)");
	
	$dados = mysqli_fetch_array($rs,1) ;
	/*
	if($dados['senha'] <> $senha)
	{
		die("Senha incorreta");
	}
	*/
	
	if($dados['ativo']==0)
	{
		die("Atenção: Você não está ativo no sistema.");
	}
	$_SESSION['logado']=true;
	$_SESSION['login']=$login;
	$_SESSION['perfil']=$dados['perfil'];
	$_SESSION['ultAcesso']=$dados['ultAcesso'];

	
?>
<html>
	<head>
		<title>Usuário logado</title>
	</head>
	<body>
		Usuário foi logado.<br>
		Seu último acesso foi em : <?php echo $dados['ultAcesso'];?>
	</body>
</html>