#include <stdio.h>

void numPerfeito(int n);

main()
{
	//vars
	int num;
	
	printf("NUM PERFEITO\n\n");
	
	//Entrada
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	//Processamento e Saída
	numPerfeito(num);
}

void numPerfeito(int n)
{
	//vars
	int i, 
		somaDiv = 0;
		
	for (i = 1; i < n; i++) {
		if (n%i == 0) {
			somaDiv += i;
		}
	}
	
	if (somaDiv == n) {
		printf("%d eh perfeito!!!\n", n);
	} else {
		printf("%d NAO eh perfeito!!!\n", n);
	}
	
	
}
