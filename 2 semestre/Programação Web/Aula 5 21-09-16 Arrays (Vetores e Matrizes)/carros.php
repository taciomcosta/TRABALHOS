<?php

	//Criando um vetor ( array )
	// A função array cria um vetor
	//No php os valores do array NÃO precisam ser do mesmo tipo
	$carros = array( "Polo", "Fiesta", "Mercedes" );
	
	//A função print_r mostra a estrutura de uma variável, var_dump também
	print_r($carros);
	var_dump($carros);
	
	//Mostrando os dado com echo
	echo "<br>";
	
	for ( $i=0; $i<=2; $i++)
		echo "Posição $i: " . $carros[$i] . "<br>";
	

?>