<?php

	$estrelinha = '';
	
	for( $n=1; $n<=10; $n++){
		
		echo $estrelinha . '<br>';
		$estrelinha = $estrelinha . '*';
		
	}
	for( $n=10; $n>=1; $n--){
		
		echo substr($estrelinha, 0, $n) . '<br>';
		
	}

?>