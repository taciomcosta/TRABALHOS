#include <stdio.h>

float calcularSomatorio(float n);

main()
{
	//vars
	float H, N;
	
	printf("SOMATORIO: 1 - 1/2 + 1/3 - 1/4 + ... 1/N\n\n");
	
	//Entrada
	printf("Digite um numero inteiro positivo: ");
	scanf("%f", &N);
	
	//Processamento
	H = calcularSomatorio(N);
	
	//Saída
	printf("Somatorio: %.2f\n", H);
}

float calcularSomatorio(float n)
{
	//vars
	float i, h = 0;
	int cont = 1;
	
	for (i = 1; i <= n; i+=2) {
		s += 1/i;
	}
	for (i = 2; i <= n; i+=2) {
		s += 1/i;
	}

	return h;	
}
