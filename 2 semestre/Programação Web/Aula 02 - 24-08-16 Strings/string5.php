<?php
/* 
strtolower($s) -> todos caracteres para min�sculo
strtoupper($s) -> todos caracteres para mai�sculo

*TRABALHAR EM CONJUNTO COM strpos()

 */

	echo strtolower('A UNICID est� localizada na Zona Leste');
	echo '<hr>';
	echo strtoupper('a aninha estava conversando com a claudinha');
	
	$sTexto = "Balde de Praia";
	$sBusca = "PRAIA";
	
	$sTexto = strtolower($sTexto);
	$sBusca = strtolower($sBusca);
	
	$posicao = strpos($sTexto, $sBusca);
	echo "<br> Encontrei na posi��o: " . $posicao;
?>