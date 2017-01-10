<?php

	$dados = array('c' => '3°', 'a' => '1°', 'b' => '2°');

	echo "<pre>".
		var_dump($dados).
	"</pre>";

	rsort($dados);

	echo "<pre>".
		var_dump($dados).
	"</pre>";

	echo $dados[0];


?>