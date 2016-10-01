<?php

	$nomes = array("Marcos", "Ana", "Ivan", "Roberta");
	
	//ordena pela ordem alfabética reversa dos valores
	rsort($nomes);
	
	print "Os nomes em ordem reversa são:<br>";
	
	foreach($nomes as $d)
	{
		print " $d -";
	}

?>