/* Programa geral de classificação usando ponteiros de funções */
#include <stdio.h>
#define TAMANHO 10

void bolha(int *, const int, int (*)(int, int)); //protótipo da função bolha, int(*)(int,int) é um parâmetro do tipo 'ponteiro de função'

int ascendente(const int, const int);
int descendente(const int, const int);

int main(){

	int a[TAMANHO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int contador, ordem;

	printf("Digite 1 para colocar na ordem ascendente, \n");
	printf("Digite 2 para colocar na ordem descendente: ");
	scanf ("%d", &ordem);

	printf("\nltens de dados na ordem original\n");
	for (contador = 0; contador <= TAMANHO - 1; contador++)
		printf("%4d", a[contador]);

	
	if (ordem ==1) {

		bolha(a, TAMANHO, ascendente); 	//envia o endereço da função ascendente, i.e. , ascendente
		printf("\nltens de dados na ordem ascendente\n");

	} else {

		bolha(a, TAMANHO, descendente); 	//envia o endereço da função ascendente, i.e. , ascendente
		printf("\nltens de dados na ordem descendente\n");

	}

	for (contador = 0; contador <= TAMANHO - 1; contador++)
		printf("%4d", a[contador]);

	printf("\n");

	return 0;

}

/*RECEBE A FUNÇÃO ASCENDENTE OU DESCENDENTE*/
void bolha(int *work, const int tamanho, int (*compare)(int, int)){

	int pass, count;
	void swap(int *, int *); //protótipo da swap

	for (pass = 1; pass <= tamanho - 1; pass++)
		
		for(count = 0; count <= tamanho - 2; count++)
			
			if ((*compare)(work[count], work[count + 1]))//usando a função recebida pelo ponteiro, poderia ser 'compare(work[count], ..).'
				swap(&work[count], &work[count + 1]);

}


void swap(int *elementolPtr, int *elemento2Ptr) {
	
	int temp;
	temp = *elementolPtr;
	*elementolPtr = *elemento2Ptr;
	*elemento2Ptr = temp;

 }


 int ascendente(const int a, const int b) {

	return b < a;
 }


 int descendente(const int a, const int b){

	return b > a;
 }