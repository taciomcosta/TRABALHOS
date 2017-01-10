//Busca Sequencial
#include <stdio.h>

main()
{
	printf("Existencia de um numero no vetor\n\n");
	
	//vars
	int v[15], i, x, cont=0;
	
	//Entrada
	for( i=0; i<15; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d",&v[i]);
	}
	
	printf("Digite um valor X: ");
	scanf("%d", &x);
	
	//Saída
	printf("\n\nPosicoes de %d no vetor:\n\n ", x);
	for(i=0; i<15; i++)
	{
		if( v[i] == x )
		{
			cont++;
			printf("%d  ", i);
		}
	}
	
	if( cont == 0)
		printf("Nao ha ocorrencias de %d no vetor", x);
}
