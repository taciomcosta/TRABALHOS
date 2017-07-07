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

main()
{
	int matriz[DIM][DIM];
	
	preencher(matriz);
	imprimir(matriz);
}
