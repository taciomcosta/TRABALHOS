<?php

	$nome = "FORA TEMER";
	
	echo "Meu nome ao contr�rio: ";
	
	
	//imprime o nome ao contr�rio 
	for( $n=strlen($nome)-1; $n>=0; $n--)
		echo substr($nome, $n, 1);
	
	
	

?>