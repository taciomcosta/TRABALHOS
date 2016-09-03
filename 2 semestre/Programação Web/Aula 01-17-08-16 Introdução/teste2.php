<?php

	$a = 1; $b = 2; $c = 3; $d = 4;
	
	$soma = $a + $b;
	$subtracao = $b - $c;
	$divisao = $c/$b;
	$multiplicacao = $d * $c;
	$mod = $d % $b;
	
	echo "Soma de $a + $b = $soma <br>"; //aspas duplas exibe os valores das vars 
	echo 'Subtração de $b + $c = ' . $subtracao . '<br>';//aspas simples mostra exatamente como está
	echo 'Divisão de $c / $b = ' . $divisao . '<br>';
	echo 'Multiplicação de $d * $c = ' . $multiplicacao . '<br>';
	echo 'Resto da divisão de $d % $b = ' . $mod . '<br>';

	
	
?>