#include <stdio.h>

main()
{
	printf("Vetor de Numeros Primos\n\n");
	
	//vars
	int v[7], i, j, cont=0, contPrimo;
	
	//Entrada
	for( i=0; i<7; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	//Processamento
	for( i=0; i<7; i++ )
	{
		contPrimo = 0;
		for( j=1; j<=v[i]; j++ )
		{
			if( v[i]%j == 0 )
			{
				contPrimo++;
			}
		}
		
		//Se for primo
		if( contPrimo == 2 )
			cont++;
	}
	//Saída
	//Se houver primos
	if( cont > 0)
		for( i=0; i<7; i++)
		{
			contPrimo=0;
			for( j=1; j<=v[i]; j++)
			{
				if( v[i]%j == 0 )
				{
					contPrimo++;
				}
			}
			
			//Se v[i] for primo
			if( contPrimo == 2)
				printf("\n%d eh primo", v[i]);
			else
				printf("\n%d NAO eh primo", v[i]);
		}
	else
		printf("\n Nao ha primos!");
	
	
}
