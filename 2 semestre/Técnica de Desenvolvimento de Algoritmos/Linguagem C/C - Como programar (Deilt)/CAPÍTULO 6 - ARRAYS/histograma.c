/* Programa para imprimir histograma */
#include <stdio.h>
#define TAMANHO 10

int main() {

	int n[TAMANHO] = {19,3,15,7,11,9,13,5,17,1};
	int i, j;
	
	printf("%s%13s%l7s\n", "Elemento", "Valor", "Histograma");
	
	for (i = 0; i <= TAMANHO - 1; i++) {
		printf("%8d%13d ", i, n[i]);
		
		for (j = 1; j <= n[i]; j++) /* imprime uma barra */
			printf("%c", ' * ');
			
		printf("\n");
	}

	return 0;
}