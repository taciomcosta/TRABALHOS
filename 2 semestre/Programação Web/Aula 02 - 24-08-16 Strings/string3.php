<?php
//Fun��es de manipula��o de Strings
/*
trim(); -> remove espa�os em branco
strlen(); -> tamanho da string
*/


$universidade = '   Unicid   ';
$universidade = trim($universidade);
echo 'O tamanho da var $universidade � ' . strlen($universidade);	

?>