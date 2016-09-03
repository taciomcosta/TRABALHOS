<?php
	
	//salvar como teste1.ph huhu :)
	
	echo "Hello World! <br> "; // <-- isto é uma STRING
	
	$tipoString = "Eu sou uma String";
	$tipoInteiro = 18;
	$tipoFloat = 12.12;
	$tipoBooleano = true;
	
	$salarioBruto = 1850;
	$aliquotaIR = 15/100; // aliquota = porcentagem
	
	$nome = 'Eu';
	
	$imposto = $salarioBruto * $aliquotaIR;
	$salarioLiquido = $salarioBruto - $imposto;
	
	echo 'Olá, ' . $nome . '<br>';
	echo 'Salário Bruto: ' . $salarioBruto . '<br>';
	echo 'Imposto: ' . $imposto . '<br>';
	echo 'Salário Líquido: ' . $salarioLiquido . '<br>';
		
?>