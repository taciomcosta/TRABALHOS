#include <stdio.h>

main()
{
	//vars
	int a, b;
	
	printf("\t\tComparacao entre numeros\n\n");
	
	//Entrada
	printf("Insira o 1o numero: ");
	scanf("%i",&a);
	
	printf("Insira o 2o numero: ");
	scanf("%i",&b);
	
	//Processamento e saída
	if ( a > b )
	{
		printf("%i eh maior que %d \n", a, b);
		printf("%i eh menor que %d \n", b, a);
	}
	else
	{
		printf("%d eh maior que %i\n", b, a);
		printf("%d eh menor que %i\n", a, b);	
	}
	
	
}
