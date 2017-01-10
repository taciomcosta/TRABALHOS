#include <stdio.h>

main()
{
	printf("Soma de uma serie\n\n");
	// S = 1/n + 2/(n-1) / + 3/(n-2) + ... + n/1
	
	//vars
	float num,i;
	float denominador, numerador, soma=0;
	
	
	//Entrada
	printf("Insira um numero inteiro: ");
	scanf("%f", &num);
	
	//Processamento
	for ( i=0; i<num; i++ )
	{
		numerador = i + 1;
		denominador = num - i;
		soma += numerador / denominador;
	}
	
	//Saída
	printf("Soma = %.2f", soma);
	
}
