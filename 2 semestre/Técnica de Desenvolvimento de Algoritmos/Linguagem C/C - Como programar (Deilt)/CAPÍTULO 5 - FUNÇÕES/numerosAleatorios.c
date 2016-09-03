/* Inteiros em uma escala ajustada e deslocada produzidos por 1 + rand ( ) %6*/
#include <stdio.h>
#include <stdlib.h>
main( )
{
	int i ;
	for (i = 1; i <= 20; i++) {
		printf ("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
		printf("\n");
	}
	return 0;
}



/* 6000 lançamentos de um dado de seis faces */
#include <stdio.h>
#include <stdlib.h>
main( ) {

	int face, jogada, frequencia1 = 0, frequencia2 = 0,
	frequencia3 = 0, frequencla4 = 0,freguencia5 = 0, frequencia6 = 0;

	for (jogada = 1, jogada <= 6000; jogada++) {

		face = 1 + rand( ) % 6;

		switch (face) {
			case 1:
				++frequencia1;
			break;
			case 2:
				++frequencia2;
			break;
			case 3:
				++frequencia3;
			break;
			case 4:
				++frequencia4;
			break;
			case 5:
				++frequencia5;
			break;
			case 6:
				++frequencia6;
			break;
		}
	}
	printf("%s%13s\n", "Face", "Freqüência");
}

/* Randomizando o programa de lançamento de um dado */
#include <stdlib.h>
#include <stdio.h>
main() {
	int i;
	unsigned semente;
	printf("Entre com a semente: ");
	scanf ("%u", &semente) ;
	srand(semente); /*<-- srand(time(NULL))== time(NULL) retorna a hora do dia (que é aleatória) no formato unsigned int, em vez de string;*/
	for (i = 1; i <= 10; i++){
		printf ("%10d", 1 + (rand() % 6));
		if (i % 5 == 0)
		printf("\n");
	}
	return 0;
}

/*
srand <-- Recebe a semente para gerara a randomização (estilo Minecraft)
rand() <-- gera o número aleatório
*/




