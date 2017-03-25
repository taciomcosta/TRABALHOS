#include <stdio.h>

main()
{
	printf("Multiplos de 2 e/ou 3\n\n");
	
	//vars
	int v[7], i, cont;
	
	//Entrada
	for(i=0; i<7; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d ", &v[i]);
	}
	
	//Processamento (2)
	cont=0;
	for( i=0; i<7; i++)
	{
		if( v[i]%2 == 0)
		{
			cont++;
		}
	}
	
	//Saída (2)
	printf("\nMultiplos de 2: \n");
	if( cont > 0)
	{
		for( i=0; i<7; i++)
		{
			if( v[i]%2 == 0)
			{
				printf("%i  ", v[i]);
			}
		}
	}
	else
	{
		printf("Nao ha multiplos de 2");
	}
		
	//Processamento(3)
	cont=0;
	for( i=0; i<7; i++)
	{
		if( v[i]%3 == 0 )
		{
			cont++;
		}
	}
	
	//Saída (3)
	printf("\nMultiplos de 3:\n");
	if( cont > 0 )
	{
		for( i=0; i<7; i++)
		{
			if( v[i]%3 == 0)
			{
				printf("%d  ", v[i]);
			}
		}
	}
	else
	{
		printf("\nNao ha multiplos de 3");
	}
		
	//Processamento( 2 e 3)
	for( i=0; i<7; i++ )
	{
		if( v[i]%2 == 0 && v[i]%3 == 0)
		{
			cont++;
		}
	}
	
	//Saída(2 e 3)
	printf("\nMultiplos de 2 e 3: \n");
	if( cont > 0 )
	{
		for( i=0; i<7; i++ )
		{
			if( v[i]%2==0 && v[i]%3==0 )
			{
				printf("%i  ", v[i]);
			}
			
		}
	}
	else
	{
		printf("\nNao ha multiplos de 2 e 3");
	}
}
