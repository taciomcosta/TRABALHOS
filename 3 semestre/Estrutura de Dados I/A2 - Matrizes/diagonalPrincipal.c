#include <stdio.h>

main()
{
	//vars
	int m[5][5], i, j, k;
	
	//Entrada
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Insira m[%d][%d]:", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	//Saída
	printf("ELEMENTOS DA DIAGONAL PRINCIPAL:\n\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == j) {
				printf("%d", m[i][j]);
			} else {
				printf("  ");
			}	
		}
		printf("\n");
	}
}
