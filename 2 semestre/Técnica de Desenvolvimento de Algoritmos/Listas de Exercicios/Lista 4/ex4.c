//Busca Sequencial
#include <stdio.h>

main()
{
	printf("Existencia de um numero no vetor\n\n");

	//vars
	int v[20], i, x, cont=0;

	//Entrada
	for( i=0; i<20; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d",&v[i]);
	}

	printf("Digite um valor X: ");
	scanf("%d", &x);

	//Saída
	printf("\n\nPosicoes do numero %d no vetor:\n\n ", x);
	for(i=0; i<20; i++)
	{
		if( v[i] == x )
		{
			cont++;
			printf("%d  ", i);
		}
	}

	if( cont == 0)
		printf("Nao ha ocorrencias do numero %d no vetor", x);
}
