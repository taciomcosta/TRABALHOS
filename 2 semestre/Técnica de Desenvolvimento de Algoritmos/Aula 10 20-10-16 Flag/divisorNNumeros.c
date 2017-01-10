#include <stdio.h>

main()
{
	printf("Divisor de varios numeros\n\n");
	
	//vars
	int num, i;
	
	printf("Insira um numero inteiro positivo, ou 0 para terminar: ");
	scanf("%i", &num);
	
	while(num != 0)
	{
		system("cls");
		printf("Divisores de %d:\n\n", num);
		for(i=1; i<=divisor; i++)
		{
			if( num%i == 0 )
				printf("%i\n", i);
		}
		
		printf("Insira um numero inteiro positivo, ou 0 para terminar: ");
		scanf("%i", &num);
	}

}

// ESTRUTURA FLAG

/*
printf(y)
scanf(x)

while(x != z)
{
	//instruções
	
	printf(y)
	scanf(x)	
}

*/

