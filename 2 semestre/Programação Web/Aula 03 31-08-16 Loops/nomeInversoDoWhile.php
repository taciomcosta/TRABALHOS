<?php

	$nome = "Tacio";
	$n = strlen($nome);
	
	do{
		echo substr($nome,($n-1),1);
		$n--;
	}while($n>=1);

?>