#include <stdio.h>

main()
{
	//vars
	int m[5][5], i, j;
	
	//Entrada
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite m[%d][%d]: ", i , j);
			scanf("%d", &m[i][j]);
		}
	}
	
	//Saída
	system("cls");
	printf("DIAGONAL SECUNDARIA:\N")
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i+j == 4) {
				printf("%d", m[i][j]);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
	
}
