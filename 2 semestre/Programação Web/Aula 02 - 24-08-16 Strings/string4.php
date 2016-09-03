<?php

/* 

strpos($s1, $s2) -> retorna o início de $s2 na $s1

 
 */

	$sTexto = 'A UNICID - Universidade Cidade de São Paulo é
	uma instituição universitária da Zona Leste.
	A UNICID forma profisisonais em diversas áreas.';
	$sBusca = 'UNICID';
	
	$posicaoInicial = strpos($sTexto, $sBusca , 5);
	echo 'Procurando por: ' . $sBusca . '<br>';
	echo 'Em : ' . $sTexto . '<br>';
	echo 'Encontrada(s) na posição: ' . $posicaoInicial . '<br>';

?>