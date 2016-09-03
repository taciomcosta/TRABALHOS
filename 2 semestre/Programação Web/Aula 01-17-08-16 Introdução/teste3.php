<?php

	$a = 1; $b = 2; $c = 3; $d = 4;
	
	
	//Operadores de incremento e decremento
	
	++$a; //pré-incremento (1+$a)
	$b++;//pós-incremento ($b+1)
	--$c;
	$d--;
	
	$total = $a-- - --$b + ++$c - $d--; //Precedência: 1° pré inc./dec.		2° pós-inc./dec.
	//Mesmo que os incrementadores estejam fazendo parte de uma atribuição, os seus valores serão modificadores 

?>
