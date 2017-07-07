#include <stdio.h>

float calcularSoma(float N);

main()
{
	//vars
	float s, n;
	
	printf("SOMA: 1 + 1/2 + ... + 1/N\n\n");
	
	//Entrada
	printf("Digite N: ");
	scanf("%f", &n);
	
	//Processamento
	s = calcularSoma(n);
	
	//Saída
	printf("\nS = 1 + 1/2 + ... + 1/%.0f = %.2f", n, s);
}


float calcularSoma(float N)
{
	float i, 
		soma = 0;
	
	for (i = 1; i <= n; i++) {
		soma += 1/i;
	}
	
	return soma;
}
