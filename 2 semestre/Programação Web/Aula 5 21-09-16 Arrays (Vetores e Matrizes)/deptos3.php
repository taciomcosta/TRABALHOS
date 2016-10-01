<?php

	$departamentos = array("Financeiro", "Producao", "RH", "Comercial");
	
	$funcionarios = array(5, 32, 3, 15);
	
	print "Os departamentos e Funcionarios são: <br>";
	
	//sizeof() retorna a extensão do array
	$tamanho = sizeof($departamentos);
	for($n=0; $n<$tamanho; $n++)
	{
		echo "Departamento <b> $departamentos[$n] </b> tem: $funcionarios[$n] <br>";
	}

?>
