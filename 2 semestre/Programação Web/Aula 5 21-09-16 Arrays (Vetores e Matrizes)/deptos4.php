<?php

	$departamentos[0][0] = "Financeiro";
	$departamentos[1][0] = "Produção";
	$departamentos[2][0] = "Recursos Humanos";
	$departamentos[3][0] = "Comercial";
	
	$departamentos[0][1] = 5;
	$departamentos[1][1] = 32;
	$departamentos[2][1] = 3;
	$departamentos[3][1] = 15;
	
	$departamentos[0][2] = "FIN";
	$departamentos[1][2] = "PRO";
	$departamentos[2][2] = "RH";
	$departamentos[3][2] = "CO";
	
	//
	
	
	print "Os departamentos e funcionários são: <br>";
	
	for($n=0;$n<sizeof($departamentos);$n++)
	{
		echo "Departamento (" . $departamentos[$n][2]. "):  " . $departamentos[$n][0] . " possui " . $departamentos[$n][1] . " funcionários <br> ";
	}


?>