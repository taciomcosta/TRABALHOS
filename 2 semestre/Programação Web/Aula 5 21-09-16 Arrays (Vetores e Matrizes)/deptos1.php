<?php

	$departamento[0] = "financeiro";
	$departamento[1] = "producao";
	$departamento[2] = "rh";
	$departamento[6] = "comercial";
	
	$empregados["financeiro"] = 5;
	$empregados["producao"] = 32;
	$empregados["rh"] = 3;
	$empregados["comercial"] = 15;
	
	//print é igual ao echo
	print "Os departamentos da empresa são:-<br>";
	
	
	//Essa estrutura trata passa por todos os dados de uma array, $d recebe cada posição do array 
	//$departamento, independente se as posições são consecutivas
	// foreach ($array as $valor)
	foreach($departamento as $d)
	{	
		echo $d . "<br>";
	}
	
	
	//Inicializando variável
	$total = 0;
	
	foreach($empregados as $quantidade)
	{
			//$total = $total + $quantidade
			$total += $quantidade;
	}
	
	print_r($departamento);
	print "<br> Total de funcionários: $total";
	


?>