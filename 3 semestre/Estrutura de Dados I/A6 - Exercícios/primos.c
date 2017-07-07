#include <stdio.h>

void numPrimo(int x);


main()
{
	//vars
	int n;
	
	printf("NUMERO PRIMO\n");
	
	//Entrada
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	//Processamento e Saída
	numPrimo(n);
}

void numPrimo(int x)
{
	//vars
	int i, 
		cont = 0;
		
	for (i = 1; i <= x; i++) {
		if (x%i == 0) {
			cont++;
		}
	}
	
	if (cont == 2)
		printf("\n%d eh primo!!!", x);
	else
		printf("\n%d NAO eh primo!!!", x);
}
