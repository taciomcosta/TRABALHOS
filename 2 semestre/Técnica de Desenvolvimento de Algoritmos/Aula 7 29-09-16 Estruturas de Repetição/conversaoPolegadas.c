#include <stdio.h>

main()
{
	printf("Conversao de Polegadas\n\n");
	
	//vars
	int i;
	float pol;
	
	for( i=1; i<=40; i++ )
	{
		//Processamento
		pol = i*2.54;
		//Saída
		printf("%i pol = %.2fcm\n", i, pol);
	}
	
}
