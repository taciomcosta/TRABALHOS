#include <stdio.h>

main()
{
	//vars
	int v[10], i, maior, pMaior;
	
	//Entrada
	printf("Digite v[%i]: ", i);
	scanf("%d", &v[0]);
	
	//Processamento
	pMaior = 0;
	maior = v[0];
	
	//Entrada
	for (i = 1; i < 10; i++) {
		printf("Digite v[%i]: ", i);
		scanf("%d", &v[i]);	
	}
	
	//Processamento
	for (i = 0; i < 10; i++)
		if (v[i] > maior) {
			maior = v[i];
			pMaior = i;
		}
	
	//Saída
	printf("\nV: ");
	for (i = 0; i < 10; i++)
		printf("%d ", v[i]);
		
	printf("\nMaior: %d", maior);
	printf("\nPosicao maior: %d", pMaior);
		
	
	
}
