#include <stdio.h>

#define DIM 3

void preencher(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			printf("Digite m[%d][%d]: ", linha, coluna);
			scanf("%d", &m[linha][coluna]);
		}
	}
}

void imprimir(int m[][DIM])
{
	int linha, coluna;
	
	printf("\nM:\n");
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			printf("%d ", m[linha][coluna]);
		}
		printf("\n");
	}
}

void diagonalPrincipal(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha == coluna) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void diagonalSecundaria(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha + coluna == DIM-1) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void semDiagonalPrincipal(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha != coluna) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void semDiagonalSecundaria(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha + coluna != DIM-1) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void triangularSuperior(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha < coluna) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

void triangularInferior(int m[][DIM])
{
	int linha, coluna;
	
	for (linha = 0; linha < DIM; linha++) {
		for (coluna = 0; coluna < DIM; coluna++) {
			if (linha > coluna) {
				printf("%d ", m[linha][coluna]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

main()
{
	int A[DIM][DIM];
	
	printf("DIAGONAIS E TRIANGULARES\n\n");
	
	preencher(A);
	imprimir(A);
	
	printf("\nDIAGONAL PRINCIPAL:\n");
	diagonalPrincipal(A);
	
	printf("\nDIAGONAL SECUNDARIA:\n");
	diagonalSecundaria(A);
	
	printf("\nSEM DIAGONAL PRINCIPAL:\n");
	semDiagonalPrincipal(A);
	
	printf("\nSEM DIAGONAL SECUNDARIA:\n");
	semDiagonalSecundaria(A);
	
	printf("\nTRIANGULAR SUPERIOR:\n");
	triangularSuperior(A);
	
	printf("\nTRIANGULAR INFERIOR:\n");
	triangularInferior(A);
}
