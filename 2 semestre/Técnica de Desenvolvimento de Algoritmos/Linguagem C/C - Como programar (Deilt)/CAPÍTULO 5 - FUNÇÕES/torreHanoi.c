/*CÁLCULADORA DE MOVIMENTOS DA TORRE DE HANÓI*/
#include <stdio.h>


/*
n = número de discos
i = pino inicial
f = pino final
a = pino de armazenamento
*/


int move (int n, int i, int f, int a){

	if (n>1){
		move(n-1,i,a,f);
		printf("%i => %i\n",i,f);
		move(n-1,a,f,i);


	}else{

		printf("%i => %i\n",i,f);
	}


}


int main(){

	int n=0;

	puts("Digite o numero de discos: ");
	scanf("%i",&n);

	int x = move(n,1,3,2);

	return 0;
}