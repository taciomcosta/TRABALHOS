#include <stdio.h>

float somar(int n);

main()
{
	//vars
	float num, soma;
	
	printf("SOMATORIO: 1/N + 2/N-1 + ... + N/1\n\n");
	
	//Entrada
	printf("Digite N: ");
	scanf("%f", &num);
	
	//Processamento
	soma = somar(num);
	
	//Saída
	printf("Soma = %.2f", soma);
}

float somar(int n)
{
	//vars
	float i, 
		j = n,
		s = 0;
		
	for (i = 1; i <= n; i++) {
		s += i/j;
		j--;
	}
	
	return s;
}
