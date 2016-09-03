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
	int n[6] = {0};
	int f[13] = {0};
	
	for (carta = 1; carta <= 5; carta++)
		
		for (linha = 0; linha <= 3; linha++)
			
			for (coluna = 0; coluna <= 12; coluna++)

				if (wBaralho[linha][coluna] == carta){
					printf("%6s de %-7s%c",wFace[coluna], wNaipe[linha], carta % 2 == 0 ? '\n' :'\t');
					n[carta] = coluna+1;
					f[carta] = linha;
				}
		
	/*PROTÓTIPOS*/
	int trincas (int *);
	void pares (int *,int);
	void quadra (int *);
	void flush (int *);

	pares(n,trincas(n));
	quadra(n);
	flush(f);

	puts("\n");
				

}

void pares(int *nPtr,int trincas){

	int i,j,cont=0;

	for (i=1;i<5;i++)
		for(j=i+1;j<=5;j++)
			if(nPtr[i]==nPtr[j])
				cont ++;

	cont -= trincas;

	if(cont==-6)
		printf("Pares: 2\n");	
	else
		printf("Pares: %i\n",cont);


}


int trincas(int *nPtr){

	int i,j,k,cont=0;

	for (i=1;i<4;i++)
		for(j=i+1;j<5;j++)
			if(nPtr[i]==nPtr[j])
				for(k=j+1;k<=5;k++)
					if(nPtr[j]==nPtr[k])
						cont ++;



	if(cont==4)
		printf("\n\nTrincas: 0\n");	
	else
		printf("\n\nTrincas: %i\n",cont);


	return cont*3;


}


void quadra(int *nPtr){

	int i,j,k,l,cont=0;

	for(i=1;i<=5;i++)
		if(nPtr[i]==1)
			cont++;

	if(cont==1)
		for (i=1;i<3;i++)
			for(j=i+1;j<4;j++)
				if(nPtr[i]==nPtr[j])
					for(k=j+1;k<5;k++)
						if(nPtr[j]==nPtr[k])
							for(l=j+1;l<5;l++)
								cont ++;
	if(cont == 2)
		puts("Quadras: 1");
	else 
		puts("Quadras: 0");


}


void flush(int *fPtr){

	int cont = 1,i;

	for(i=1;i<5;i++)
		if( fPtr[i] != fPtr[i+1] )
			cont = 0;

	printf("Flush:%i\n",cont);


}


