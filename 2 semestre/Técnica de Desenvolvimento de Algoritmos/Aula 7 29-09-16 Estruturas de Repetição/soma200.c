#include <stdio.h>

main()
{
	printf("Soma de numeros ate 200\n\n");
	
	//vars
	int i, soma = 0;
	
	//Processamento
	for ( i=1; i<=200; i++ )
	{
		printf("%d\n", i);
		//acumulador
		soma+=i;
	}
	
	printf("%i", soma);
	
	
}
