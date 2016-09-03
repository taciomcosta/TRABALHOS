#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 7

int main(){

	char *x[TAMANHO] = {"Tacio","Tania","Claudio","Ola","Montiro","Tiro","Eu"};

	void organize (char**);

	organize(x);


	return 0;
}

void organize(char *x[]){

	int i,j;
	char *y;
	for( j=1 ; j<=TAMANHO-1 ; j++ )
		for( i=0 ; i<=TAMANHO-2 ; i++ )//CMOTT
			if(strcmp(x[i],x[i+1]) >= 1){
				y = x[i];
				x[i] = x[i+1];
				x[i+1] = y;
			}

	for(i=0;i<=TAMANHO-1;i++)
		printf("%s\n",x[i]);
	
}