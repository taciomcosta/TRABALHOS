#include <stdio.h>

#define DIM 5

void lerMatriz(int m[][DIM]);
void imprimirMatriz(int m[][DIM]);
void somarMatrizes(int a[][DIM], int b[][DIM]);
void subtrairMatrizes(int a[][DIM], int b[][DIM]);

main()
{
	int A[DIM][DIM], B[DIM][DIM];
	
	lerMatriz(A);
	lerMatriz(B);
	printf("\nMatriz A: \n");
	imprimirMatriz(A);
	printf("\nMatriz B: \n");
	imprimirMatriz(B);
	printf("\nSoma: \n");
	somarMatrizes(A, B);
	printf("\nSubtracao: \n");
	subtrairMatrizes(A, B);
}

void lerMatriz(int m[][DIM])
{
	int i, j;
	
	printf("Carregando matriz de %dx%d\n", DIM, DIM);
	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			printf("Digite m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
}

void imprimirMatriz(int m[][DIM])
{
	int i, j;
	
	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

void somarMatrizes(int a[][DIM], int b[][DIM])
{
	int i, j, res[DIM][DIM];
	
	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			res[i][j] = a[i][j] + b[i][j];
		}
	}
	
	imprimirMatriz(res);
}

void subtrairMatrizes(int a[][DIM], int b[][DIM])
{
	int i, j, res[DIM][DIM];
	
	for (i = 0; i < DIM; i++) {
		for (j = 0; j < DIM; j++) {
			res[i][j] = a[i][j] - b[i][j];
		}
	}
	
	imprimirMatriz(res);
}
