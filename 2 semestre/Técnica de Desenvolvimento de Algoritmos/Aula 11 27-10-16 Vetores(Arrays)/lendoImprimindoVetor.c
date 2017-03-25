//Lendo e imprimindo um vetor na tela
#include <stdio.h>

main()
{
	//<tipo> identificador[<n° de posições>];
	int v[10],i;
	
	printf("Vetores - Basico\n\n");
	printf("Vetor de 10 inteiros, lidos por teclado\n\n");
	
	//Fazendo a leitura para os elementos do vetor v
	//Rotina de Leitura do Vetor
	for( i=0; i<10; i++)
	{
		printf("Digite v[%d]: ",i);
		scanf("%d",&v[i]);
	}
	
	//Imprimindo os dados no vetor
	//Rotina de impressão do vetor
	system("cls");
	printf("Vetor de 10 inteiros na tela:\n\n");
	for( i=0; i<10; i++ )
	{
		printf("\t%d",v[i]);
	}
	
}
