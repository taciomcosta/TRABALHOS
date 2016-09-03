<?php

	$nome = "Tacio";
	$n = strlen($nome);
	
	while( $n >= 1 )
	{
		echo substr($nome,($n-1),1);
		$n--;
	}

?>