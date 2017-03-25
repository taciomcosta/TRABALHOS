#include <stdio.h>

main()
{
	printf("Quantidade de Numeros Negativos e Soma dos Positivos\n\n");
	
	//vars
	float nums[10],somaPositivos=0;
	int i, qtNegativos=0;
	
	//Entradas
	for( i=0; i<10; i++)
	{
		printf("Digite o %do numero: ", i+1);
		scanf("%f",&nums[i]);
		//Processamento
		if( nums[i] > 0 )
		{
			somaPositivos += nums[i];
		}
		else
		{
			qtNegativos ++;
		}
	}
	
	printf("\nSoma dos positivos: %.1f\n", somaPositivos);
	printf("\nQuantidade de negativos: %i\n", qtNegativos);
	
	
	
	
}
