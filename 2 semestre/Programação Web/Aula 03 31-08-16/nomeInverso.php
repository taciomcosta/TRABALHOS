<?php

	$nome = "FORA TEMER";
	
	echo "Meu nome ao contrário: ";
	
	
	//imprime o nome ao contrário 
	for( $n=strlen($nome)-1; $n>=0; $n--)
		echo substr($nome, $n, 1);
	
	
	

?>