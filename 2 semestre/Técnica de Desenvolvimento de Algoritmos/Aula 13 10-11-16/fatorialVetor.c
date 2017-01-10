#include <stdio.h>

main()
{
	printf("Vetor de 8 inteiros - fatoriais\n\n");
	
	//vars
	int v[8], res[8], i,j, fat;
	
	//Entradas
	for( i=0; i<8; i++)
	{
		printf("Digite v[%i]: ", i);
		scanf("%d", &v[i]);
	}
	
	//Processamento
	for( i=0; i<8; i++)
	{
		fat = v[i];
		for( j=fat-1; j>1; j--)
		{
			fat *= j;
		}
		res[i] = fat;
	}
	
	//Saída
	printf("\nVetor Principal:\n");
	for( i=0; i<8; i++ )
	{
		printf("%d  ", v[i]);
	}
	
	printf("\nVetor Resultante: \n");
	for( i=0; i<8; i++)
	{
		printf("%d  ", res[i]);
	}
	
}
