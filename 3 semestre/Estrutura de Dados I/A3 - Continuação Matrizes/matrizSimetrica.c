#include <stdio.h>

main()
{
	//vars
	int a[2][3], t[3][2], i, j;
	
	printf("MATRIZ TRANSPOSTA\n\n");
	
	//Entrada
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("Digite a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	//Processamento e Saída
	system("cls");
	
	//A
	printf("A:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (a[i][j] != t[i][j]) {
				
			}
		}
		printf("\n");
	}
	
	
	
}
