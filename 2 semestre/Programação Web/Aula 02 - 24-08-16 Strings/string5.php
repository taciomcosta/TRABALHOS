<?php
/* 
strtolower($s) -> todos caracteres para minúsculo
strtoupper($s) -> todos caracteres para maiúsculo

*TRABALHAR EM CONJUNTO COM strpos()

 */

	echo strtolower('A UNICID está localizada na Zona Leste');
	echo '<hr>';
	echo strtoupper('a aninha estava conversando com a claudinha');
	
	$sTexto = "Balde de Praia";
	$sBusca = "PRAIA";
	
	$sTexto = strtolower($sTexto);
	$sBusca = strtolower($sBusca);
	
	$posicao = strpos($sTexto, $sBusca);
	echo "<br> Encontrei na posição: " . $posicao;
?>