#include <stdio.h>

main()
{
	//vars
	int a[5][5], b[5][5], soma[5][5], i, j;
	
	//Entrada
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	system("cls");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
			//Processamento
			soma[i][j] = a[i][j] + b[i][j];
		}
	}
	
	//Saída
	system("cls");
	printf("A:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nB:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSOMA:\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", soma[i][j]);
		}
		printf("\n");
	}
	
}
