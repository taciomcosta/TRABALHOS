/* Programa de distribuição de cartas */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void embaralhar(int [][13]);
void distribuir(const int [][13],  char** ,  char** );

int main(){
	char *naipe[4] = {"Copas","Ouros","Paus","Espadas"}; //Cada elemento aponta para a 1° letra de cada string
	char *face[13] = {"As","Dois","Tres", "Quatro","Cinco","Seis","Sete","Oito","Nove","Dez","Valete","Dama", "Rei"};
	int baralho[4][13] = {0};

	srand(time(NULL));//semente para escolher números aleatórios

	embaralhar(baralho);
	distribuir(baralho, face, naipe);

	return 0;

	}


void embaralhar(int wBaralho[] [13] ) {//int wBaralho [][13] está recebendo o endereço de baralho, é uma var de ponteiro
	int carta, linha, coluna;

	for (carta = 1; carta <= 52; carta++) {
		linha = rand() % 4;//naipe

		coluna = rand() % 13;//numero

		while (wBaralho[linha][coluna] != 0) {//a estrutura faz com que nenhuma carta seja escolhida duas vezes
	
			linha = rand() % 4;
			coluna = rand() % 13;

		}

		wBaralho[linha][coluna] = carta;
	}
}


void distribuir(const int wBaralho[] [13],  char *wFace[],  char *wNaipe[]){

	int carta, linha, coluna;
	
	for (carta = 1; carta <= 52; carta++)
		
		for (linha = 0; linha <= 3; linha++)
			
			for (coluna = 0; coluna <= 12; coluna++)

				if (wBaralho[linha][coluna] == carta)
					printf("%6s de %-7s%c",wFace[coluna], wNaipe[linha], carta % 2 == 0 ? '\n' :'\t');
					//

}