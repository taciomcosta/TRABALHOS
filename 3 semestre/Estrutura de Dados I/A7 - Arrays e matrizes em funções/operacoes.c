#include <stdio.h>

void lerVetor(int v[], int tam);
void imprimirVetor(int v[], int tam);
void calcular(int a[], int tam, int b[]);

main()
{
	//vars
	int A[6], B[6];
	
	printf("OPERACOES COM VETORES\n\n");
	
	lerVetor(A, 6);
	lerVetor(B, 6);
	imprimirVetor(A, 6);
	imprimirVetor(B, 6);
	calcular(A, 6, B);
}

void lerVetor(int v[], int tam)
{
	//vars
	int i;
	
	for (i = 0; i < tam; i++) {	
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
}

void imprimirVetor(int v[], int tam)
{
	//vars
	int i;
	
	printf("\n\nV:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", v[i]);
	}
}

void calcular(int a[], int tam, int b[])
{
	//vars
	int i;
	
	printf("\n\nSoma:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", a[i] + b[i]);
	}
	
	printf("\n\nSubtracao:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", a[i] - b[i]);
	}
	
	printf("\n\nMultiplicacao:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", a[i] * b[i]);
	}
}
