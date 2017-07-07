#include <stdio.h>

void intercalarVetores(int a[], int b[], int tam);
void lerVetor(int v[], int tam);
void imprimirVetor(int v[], int tam);

main()
{
	//vars
	int A[6], B[6];
	
	printf("INTERCALACAO DE VETORES\n\n");
	
	lerVetor(A, 6);
	lerVetor(B, 6);
	imprimirVetor(A, 6);
	imprimirVetor(B, 6);
	intercalarVetores(A, B, 6);
}

void lerVetor(int v[], int tam)
{
	int i;
	
	for (i = 0; i < tam; i++) {
		printf("Digite v[%d]: ", i);
		scanf("%d", &v[i]);
	}
}

void imprimirVetor(int v[], int tam) 
{
	int i;
	
	printf("\nV:\n");
	for (i = 0; i < tam; i++) {
		printf("%d ", v[i]);
	}	
	printf("\n");
}

void intercalarVetores(int a[], int b[], int tam)
{
	int i, inter[tam*2];
	
	for (i = 0; i < tam*2; i++) {
		inter[i] = a[i];
		inter[i+1] = b[i];
	}
	
	imprimirVetor(inter, 12);
}
