/*NÚMEROS DA MEGA-SENA DA VIRADA*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int num=0,cont;

	srand(time(NULL));
	puts("NÚMEROS DA MEGA-SENA DA VIRADA: ");
	num = 1 + (rand() % 60);
	printf("%i",num);

	for(cont=2;cont<=6;cont++){
		num = 1 + (rand() % 60);
		printf(" - %i",num);
	}
	puts("\n");
}