<?php

/* 

strpos($s1, $s2) -> retorna o in�cio de $s2 na $s1

 
 */

	$sTexto = 'A UNICID - Universidade Cidade de S�o Paulo �
	uma institui��o universit�ria da Zona Leste.
	A UNICID forma profisisonais em diversas �reas.';
	$sBusca = 'UNICID';
	
	$posicaoInicial = strpos($sTexto, $sBusca , 5);
	echo 'Procurando por: ' . $sBusca . '<br>';
	echo 'Em : ' . $sTexto . '<br>';
	echo 'Encontrada(s) na posi��o: ' . $posicaoInicial . '<br>';

?>