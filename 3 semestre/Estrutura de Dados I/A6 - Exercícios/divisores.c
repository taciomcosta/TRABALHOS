#include <stdio.h>

void calcularDivisores(int x);

main()
{
	//vars
	int n;
	
	printf("DIVISORES DE UM NUMERO\n\n");
	
	//Entrada
	printf("Digite N: ");
	scanf("%d", &n);
	
	//Processamento e Saída
	calcularDivisores(n);
}

void calcularDivisores(int x)
{
	//vars
	int i;
	
	for (i = 1; i <= x; i++) {
		if (x%i == 0)
			printf("%d\n", i);
	}
}
