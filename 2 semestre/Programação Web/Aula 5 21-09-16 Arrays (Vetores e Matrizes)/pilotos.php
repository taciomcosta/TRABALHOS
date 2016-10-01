<?php

	$pilotos['2.1'] = "Fernando Alonso";
	$pilotos['3.1'] = "Lewis Hamilton";
	$pilotos['2.2'] = "Mark Webber";
	$pilotos['1.1'] = "Nico Rosberg";
	$pilotos['3.2'] = "Romain Grosjean";
	$pilotos['1.1'] = "Sebastian Vettel";
	
	//ordena pela ordem alfabética das posições
	ksort($pilotos);
	print "<br>O grid da largada (ordem da chave) é: <br>";
	
	//
	foreach($pilotos as $chave => $valor)
	{
		echo "$chave - $valor <br>";
	}
	
	

?>