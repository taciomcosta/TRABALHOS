<?php

	//Criando um vetor ( array )
	// A fun��o array cria um vetor
	//No php os valores do array N�O precisam ser do mesmo tipo
	$carros = array( "Polo", "Fiesta", "Mercedes" );
	
	//A fun��o print_r mostra a estrutura de uma vari�vel, var_dump tamb�m
	print_r($carros);
	var_dump($carros);
	
	//Mostrando os dado com echo
	echo "<br>";
	
	for ( $i=0; $i<=2; $i++)
		echo "Posi��o $i: " . $carros[$i] . "<br>";
	

?>