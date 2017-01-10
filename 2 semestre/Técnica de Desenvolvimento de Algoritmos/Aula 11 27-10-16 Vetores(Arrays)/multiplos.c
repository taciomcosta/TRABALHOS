#include <stdio.h>

main()
{
	printf("Multiplos de 2, 3 e 2 e 3\n\n");
	
	//vars
	int nums[7], i;
	
	//Entradas
	for(i=0; i<7; i++)
	{
		printf("Digite o %io numero: ", i+1);
		scanf("%d",&nums[i]);
	}
	
	//Saída
	system("cls");
	
	//Multiplos de 2
	printf("Multiplos de 2: \n");
	for( i=0; i<7; i++)
	{
		if( nums[i] % 2 == 0 )
		{
			printf("%d,",nums[i]);
		}
	}
	
	//Multiplos de 3
	printf("\n\nMultiplos de 3: \n");
	for(i=0; i<7; i++)
	{
		if( nums[i] % 3 == 0 )
		{
			printf("%d,",nums[i]);
		}
	}
	
	//Multiplos de 2 e 3
	printf("\n\nMultiplos de 2 e 3: \n");
	for( i=0; i<7; i++)
	{
		if( nums[i] % 2 == 0 &&  nums[i] % 3 == 0 )
		{
			printf("%d,",nums[i]);
		}
	}
	
}
