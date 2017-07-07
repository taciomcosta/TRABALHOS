#include <stdio.h>

main()
{
	printf("\t\tVETORES INTERCALADOS\n");
	
	//vars
	int a[6], b[6], inter[12], i;
	
	//Entrada
	for (i = 0; i < 6; i++) {
		printf("Digite A[%i]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (i = 0; i < 6; i++) {
		printf("Digite B[%i]: ", i);
		scanf("%d", &b[i]);
	}
	
	//Processamento
	for (i = 0; i < 6; i++) {
		inter[2*i] = a[i];
		inter[2*i + 1] = b[i];
	}
	
	//Saída
	system("cls");
	printf("\n\t\t\tINTER: ");
	for (i = 0; i < 12; i++)
		printf("%d ", inter[i]);
	
}
