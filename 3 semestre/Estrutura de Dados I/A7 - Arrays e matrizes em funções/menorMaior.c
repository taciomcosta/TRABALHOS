#include <stdio.h>

void calcularMenor(int v[], int tam);
void calcularMaior(int v[], int tam);
void lerVetor(int v[], int tam);
void imprimirVetor(int v[], int tam);

main()
{
	//vars
	int A[10];
	
	printf("MENOR E MAIOR ELEMENTO DE UM VETOR\n\n");
	
	lerVetor(A, 10);
	imprimirVetor(A, 10);
	calcularMenor(A, 10);
	calcularMaior(A, 10);
}

void lerVetor(int v[], int tam)
{
	int i;
	
	for (i = 0; i < tam; i++) {
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
}

void imprimirVetor(int v[], int tam) {
	int i;
	
	printf("\nV:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

void calcularMenor(int v[], int tam) {
	
	int i, 
		pos = 0,
		m = v[0];
	
	for (i = 1; i < tam; i++) {
		if (v[i] < m) {
			m = v[i];
			pos = i;
		}
	}
	
	printf("\nMenor elemento: v[%d] = %i\n", pos, m);
}

void calcularMaior(int v[], int tam) {
	
	int i, 
		pos = 0,
		m = v[0];
	
	for (i = 1; i < tam; i++) {
		if (v[i] > m) {
			m = v[i];
		}
	}
	
	printf("\nMaior elemento: v[%d] = %i\n", i, m);
}
