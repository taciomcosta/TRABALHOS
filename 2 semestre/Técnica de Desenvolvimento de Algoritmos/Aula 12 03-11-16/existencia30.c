//Busca Sequencial

#include <stdio.h>

main()
{
	printf("\n\n");
	
	//vars
	int v[15], i, cont=0;
	
	
	//Entrada
	for( i=0; i<15; i++)
	{
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
	
	//Saída
	printf("\nPosicoes em que ha 30: \n");
	for(i=0; i<15; i++)
	{
		if(v[i] == 30)
		{
			printf("%d  ", i);
			cont++;
		}
		
	}

	if( cont == 0 )
		printf("\nNao ha nenhum 30 no vetor");
	
	

	
}
