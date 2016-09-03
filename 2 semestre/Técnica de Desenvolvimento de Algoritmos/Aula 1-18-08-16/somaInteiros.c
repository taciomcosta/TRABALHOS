//PROGRAMA QUE LÊ E SOMA DOIS NÚMEROS INTEIROS
#include <stdio.h>

main()
{

	//Principais tipos de dados:
	/*
		int -> %i ou %d
		float -> %f
		double -> %d
		char -> %c	
	*/
	
	int n1,n2,soma;
	
	printf("=== Soma de dois nums inteiros === \n");
	
	//Entradas
	printf("Digite o 1o num: ");
	scanf("%i",&n1);//lendo a var n1
	printf("Digite o 2o num: ");
	scanf("%i",&n2);
	
	//Processamento
	soma = n1 + n2;
	
	//Saída
	printf("\nA soma vale: %i\n\n",soma);
	printf("%i + %i = %i",n1,n2,soma);
	
	
}
