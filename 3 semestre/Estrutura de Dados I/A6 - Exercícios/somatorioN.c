#include <stdio.h>

int calcularSoma(int x);

main()
{
	//vars
	int n, soma;
	
	printf("SOMATORIO DE 1 ATE N\n\n");
	
	//Entrada
	printf("Digite N: ");
	scanf("%d", &n);
	
	//Processamento
	soma = calcularSoma(n);
	
	//Saída
	printf("SOMA: %d", soma);
}

int calcularSoma(int x)
{
	//vars
	int i, 
		s = 0;
		
	for (i = 1; i <= x; i++) {
		s += i;
	}
	
	return s;
}
