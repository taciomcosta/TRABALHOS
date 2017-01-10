<?php session_start();

	if( isset($_SESSION['nome']) )
	{
		echo "Usuário Logado: " . $_SESSION['nome'] ;
		echo "<br>";
		$perfil = $_SESSION['perfil'];
		if( $perfil == "C" )
			echo "Cliente";
		else if( $perfil == "O" )
			echo "Operador";
		else
			echo "Invasor";	
	}
	else
		echo "Vá logar!<br>";
	

?>