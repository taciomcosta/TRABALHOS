#include <stdio.h>

main()
{
	printf("MDC - Algoritmo de Euclides\n\n");

	//vars
	int a, b, aux, resto=1;

	//Entradas
	printf("Insira o 1o numero: ");
	scanf("%d", &a);

	printf("Insira o 2o numero: ");
	scanf("%d", &b);

	//Processamento
	if ( a < b )
	{
		aux = a;
		a = b;
		b = aux;
	}

	while( resto != 0 )
	{
		resto = a%b;
		a = b;
		//Essa condição não sobrescreve o resultado no final
		if(resto!=0)
			b = resto;
	}

	//Saída
	printf("MDC = %d",b);


}
