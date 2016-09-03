/*USANDO PONTEIROS DE FUNÇÕES*/

#include <stdio.h>


//PROTÓTIPOS
int soma(int,int);
int subtracao(int,int);
int multiplicacao(int,int);
int divisao (int,int);

int main(){

	int x,y,i;
	int (*op[4]) (int,int) = {soma,subtracao,multiplicacao,divisao};

	puts("Digite um valor para x:");
	scanf("%i",&x);

	puts("Digite um valor para y:");
	scanf("%i",&y);

	puts("Escolha uma operacao:\n\t0.Soma\n\t1.Subtracao\n\t2.Multiplicacao\n\t3.Divisao\n");
	scanf("%i",&i);

	printf("%i\n",(*op[i])(x,y)); // <-- se eu não fizesse isso, teria que fazer um switch para cada possibilidade de escolha de função
								  // outra maneira de escrever (*op[i]) seria op[i]
	return 0;

}


int soma (int x, int y){

	return x+y;

}

int subtracao (int x, int y){

	return x-y;

}

int multiplicacao (int x, int y){

	return x*y;

}

int divisao (int x, int y){

	return x/y;

}

