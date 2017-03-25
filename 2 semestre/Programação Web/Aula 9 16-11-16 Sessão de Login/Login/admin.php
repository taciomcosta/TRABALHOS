<?php session_start();?>

<html>
	<head>
		<title>Acesso à área administrativa</title>
	</head>
	<body>
<?php
	// admin.php
	//  Dá acesso às páginas de administração
	// usuário está logado?
	
	if( ! isset($_SESSION['logado']))
	{
		die("Faça login primeiro.");
	}
	
	if($_SESSION['logado']==false)
	{
		die("Você foi desconectado(a) do sistema. Faça login");
	}
?>

Usuário Logado:<b> <?php echo $_SESSION['login'];?></b>
<br>
Perfil:<b>
<?php	
	$perfil = $_SESSION['perfil'];
	if($perfil=="C")
		echo "Cliente";
	else if ($perfil=="O")
		echo "Operador";
	else if ($perfil=="S")
		echo "Supervisor";
	else
		echo "Invasor";
?></b><br>
Data do último acesso: <b>
<?php echo $_SESSION['ultAcesso'];?></b>
<hr>
Você agora terá acesso às páginas administrativas.

</body>
</html>