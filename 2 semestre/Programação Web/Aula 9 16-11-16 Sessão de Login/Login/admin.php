<?php session_start();?>

<html>
	<head>
		<title>Acesso � �rea administrativa</title>
	</head>
	<body>
<?php
	// admin.php
	//  D� acesso �s p�ginas de administra��o
	// usu�rio est� logado?
	
	if( ! isset($_SESSION['logado']))
	{
		die("Fa�a login primeiro.");
	}
	
	if($_SESSION['logado']==false)
	{
		die("Voc� foi desconectado(a) do sistema. Fa�a login");
	}
?>

Usu�rio Logado:<b> <?php echo $_SESSION['login'];?></b>
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
Data do �ltimo acesso: <b>
<?php echo $_SESSION['ultAcesso'];?></b>
<hr>
Voc� agora ter� acesso �s p�ginas administrativas.

</body>
</html>