//Leitura e impressão de uma matriz quadrada
#include <stdio.h>

main()
{
	//vars
	int i, j, m[5][5];
	
	//Rotina de leitura
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	//Rotina de impressão
	system("cls");
	printf("\nMATRIZ M:");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
		
}
