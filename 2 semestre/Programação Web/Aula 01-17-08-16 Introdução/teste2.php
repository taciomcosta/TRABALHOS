<?php

	$a = 1; $b = 2; $c = 3; $d = 4;
	
	$soma = $a + $b;
	$subtracao = $b - $c;
	$divisao = $c/$b;
	$multiplicacao = $d * $c;
	$mod = $d % $b;
	
	echo "Soma de $a + $b = $soma <br>"; //aspas duplas exibe os valores das vars 
	echo 'Subtra��o de $b + $c = ' . $subtracao . '<br>';//aspas simples mostra exatamente como est�
	echo 'Divis�o de $c / $b = ' . $divisao . '<br>';
	echo 'Multiplica��o de $d * $c = ' . $multiplicacao . '<br>';
	echo 'Resto da divis�o de $d % $b = ' . $mod . '<br>';

	
	
?>