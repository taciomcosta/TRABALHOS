#include <stdio.h>

main()
{
	printf("Soma e Diferenca de Vetores\n\n");
	
	//vars
	int a[6], b[6], soma[6], dif[6], i;
	
	//Entradas
	for( i=0; i<6; i++ )
	{
		printf("Digite a[%i]: ", i);
		scanf("%d",&a[i]);
	}
	
	for( i=0; i<6; i++ )
	{
		printf("Digite b[%d]: ", i);
		scanf("%i",&b[i]);
	}
	
	//Processamento
	for( i=0; i<6; i++)
	{
		soma[i] = a[i] + b[i];
		dif[i] = a[i] - b[i];
	}
	
	//Saída
	printf("\n\nVetor Soma: \n");
	for( i=0; i<6; i++)
	{
		printf("%d  ", soma[i]);
	}
	
	printf("\nVetor Diferença: \n");
	for( i=0; i<6; i++ )
	{
		printf("%d  ", dif[i]);
	}
}
