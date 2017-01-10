<?php

	//É preciso inicializar a sessão em todas as páginas que ela for utilizada
	session_start();
	
	//Se não está setada a variável $_SESSION['logado']
	if( !isset($_SESSION['logado']) )
		die("Faça o login");
	
	echo "Estou listando os produtos";

?>