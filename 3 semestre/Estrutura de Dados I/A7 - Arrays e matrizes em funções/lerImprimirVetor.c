//Subalgoritmo para ler e imprimir um vetor de 6 inteiros
#include <stdio.h>

void lerVetor(int v[], int tam)
{
	int i;
	
	for(i = 0; i < tam; i++) {
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
}

void imprimirVetor(int v[], int tam)
{
	int i;
	
	for (i = 0; i < tam; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}

main()
{
	int A[6];
	
	printf("LEITURA E IMPRESSAO DE VETOR\n\n");
	
	lerVetor(A, 6);
	imprimirVetor(A, 6);
}
