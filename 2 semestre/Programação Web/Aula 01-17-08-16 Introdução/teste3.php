<?php

	$a = 1; $b = 2; $c = 3; $d = 4;
	
	
	//Operadores de incremento e decremento
	
	++$a; //pr�-incremento (1+$a)
	$b++;//p�s-incremento ($b+1)
	--$c;
	$d--;
	
	$total = $a-- - --$b + ++$c - $d--; //Preced�ncia: 1� pr� inc./dec.		2� p�s-inc./dec.
	//Mesmo que os incrementadores estejam fazendo parte de uma atribui��o, os seus valores ser�o modificadores 

?>
