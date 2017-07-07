#include <stdio.h>

main()
{
	//vars
	int m[5][5], i, j, l, c;
	
	//Entrada
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite M[%d][%d]: ", i, j);
			scanf("%i", &m[i][j]);
		}
	}
	
	printf("Digite uma linha L (0 <= L < 5): ");
	scanf("%d", &l);
	
	printf("Digite uma coluna C (0 <= C < 5: ");
	scanf("%d", &c);
	
	//Processamento e Saída
	system("cls");
	
	//A
	printf("A:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	
	//Linha L
	printf("\n\nLinha %d:\n", l);
	for (i = 0; i < 5; i++) {
		printf("%d ", m[l][i]);
	}
	
	//Linha L
	printf("\n\nColuna %d:\n", c);
	for (i = 0; i < 5; i++) {
		printf("%d\n", m[i][c]);
	}
	
	printf("\n\nLinha %d e Coluna %d:\n", l, c);
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++){
			if (i == l || c == j) {
				printf("%d ", m[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
