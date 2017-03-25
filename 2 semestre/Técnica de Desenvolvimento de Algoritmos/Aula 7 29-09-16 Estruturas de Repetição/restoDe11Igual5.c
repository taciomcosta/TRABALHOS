#include <stdio.h>

main()
{
	printf("Numeros divididos por 11 que tem resto igual a 5\n\n");
	
	//vars
	int i;
	
	for(i=1000; i<=2000; i++)
	{
		//Se o numero, quando dividido por 11, tiver resto = 5, imprima-o
		if( i%11 == 5 )
			printf("%d\n", i);
			
	}
	
}
