<?php

	$departamentos[0] = "financeiro";
	$departamentos[1] = "producao";
	$departamentos[2] = "rh";
	$departamentos[3] = "comercial";

	
	
	//ordena pela ordem alfabética dos valores (crescente)
	sort($departamentos);
	
	print "Os departamentos em ordem alfabética são: <br>";
	
	echo '<hr>';
	
	foreach($departamentos as $nome)
	{
		echo $nome . '<br>';
	}
	
	
	
?>