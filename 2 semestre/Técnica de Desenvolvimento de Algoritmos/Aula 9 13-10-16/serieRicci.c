#include <stdio.h>

main()
{
	printf("Serie de Ricci\n\n");
	
	//vars
	int num, ant, atual, aux, i;
	
	//Entradas
	printf("Insira a quantidade de termos: ");
	scanf("%i",&num);
	
	printf("Insira o 1o termo: ");
	scanf("%d", &ant);
	
	printf("Insira o 2o termo: ");
	scanf("%i", &atual);
	
	//Processamento e Saída
	for(i=1; i<=num; i++)
	{
		printf("%d\n",ant);
		aux = atual;
		atual += ant;
		ant = aux;
	}
	
}
