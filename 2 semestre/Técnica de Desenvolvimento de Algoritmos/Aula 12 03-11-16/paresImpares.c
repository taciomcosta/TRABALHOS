#include <stdio.h>

main()
{
	printf("Pares e Impares\n\n");
	
	//vars
	int v[6], i, contPar=0, contImpar=0;
	
	//Entrada
	for( i=0; i<6; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d",&v[i]);
	}
	
	//Processamento
	for( i=0; i<6; i++)
	{
		if( v[i]%2 == 0 )
			contPar++;
		else
			contImpar++;
	}
	
	//Saída
	printf("\n\nQuantidade de numeros pares: %d\n", contPar);
	for( i=0; i<6; i++)
	{
		if( v[i]%2 == 0)
			printf("%d  ", v[i]);
		
	}
	
	printf("\n\nQuantidade de numeros impares: %d\n", contImpar);
	for( i=0; i<6; i++)
	{
		if( v[i]%2 == 1)
			printf("%d  ", v[i]);
	}
	
}
