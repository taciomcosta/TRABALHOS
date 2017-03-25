#include <stdio.h>

main()
{
	printf("Varios Primos\n\n");

	//vars
	int num, divisor, contador;

	//Entrada
	printf("Insira um numero positivo, ou 0 para terminar: ");
	scanf("%i", &num);

	while( num != 0 )
	{
		contador = 0;

		for(divisor=1; divisor<=num; divisor++)
		{
			if( num%divisor == 0 )
                contador++;
		}

		if( contador == 2 )
			printf("%d eh primo\n\n", num);
		else
			printf("%i NAO eh primo\n\n", num);

		printf("Insira um numero positivo, ou 0 para terminar: ");
		scanf("%d", &num);
	}
}
