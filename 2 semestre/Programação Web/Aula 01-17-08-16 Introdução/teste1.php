<?php
	
	//salvar como teste1.ph huhu :)
	
	echo "Hello World! <br> "; // <-- isto � uma STRING
	
	$tipoString = "Eu sou uma String";
	$tipoInteiro = 18;
	$tipoFloat = 12.12;
	$tipoBooleano = true;
	
	$salarioBruto = 1850;
	$aliquotaIR = 15/100; // aliquota = porcentagem
	
	$nome = 'Eu';
	
	$imposto = $salarioBruto * $aliquotaIR;
	$salarioLiquido = $salarioBruto - $imposto;
	
	echo 'Ol�, ' . $nome . '<br>';
	echo 'Sal�rio Bruto: ' . $salarioBruto . '<br>';
	echo 'Imposto: ' . $imposto . '<br>';
	echo 'Sal�rio L�quido: ' . $salarioLiquido . '<br>';
		
?>