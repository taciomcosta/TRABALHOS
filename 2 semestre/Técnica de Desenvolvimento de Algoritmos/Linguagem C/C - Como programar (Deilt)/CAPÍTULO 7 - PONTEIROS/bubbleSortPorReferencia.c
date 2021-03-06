/*Este programa coloca valores em um array, classifica os valores em ordem ascendente e imprime o array resultante */

#include <stdio.h>
#define TAMANHO 10

void classBolha (int *, int);

int main() {

	int i, a[TAMANHO]= {2,6,4,8,10,12,89,68,45,37};

	printf("Itens de dados na ordem original\n");
	
	for(i = 0; i <= TAMANHO - 1; i++)
		printf("%4d", a[i]);
	
	classBolha (a, TAMANHO); /* ordena o array */

	printf("\nltens de dados em ordem ascendente\n");
	
	for (i = 0; i <= TAMANHO - 1; i++)
		printf("%4d", a[i]);
	
	printf("\n");
	 return 0;
}


void classBolha (int *array, int tamanho) {
	
	int pass, j;

	void swap(int *, int *);		// protótipo da função swap dentro da função classBolha, só a função classBolha pode usar a swap
	
	for (pass = 1; pass <= tamanho - 1; pass++)

		for (j = 0; j <= tamanho - 2; j++)

			if (array[j] > array[j + 1])
				swap(&array[j], &array[j +1]);

}

void swap(int *elemento1Ptr, int *elemento2Ptr){
	
	int temp;
	temp = *elemento1Ptr;
	*elemento1Ptr = *elemento2Ptr;
	*elemento2Ptr = temp;

}