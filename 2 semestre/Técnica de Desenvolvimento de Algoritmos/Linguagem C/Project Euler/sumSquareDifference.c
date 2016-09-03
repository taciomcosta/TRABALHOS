#include <stdio.h>

int main(){
	
	//SUM OF THE SQUARES
	int i = 1, sumSQ = 0, sqSUM=0,res;

	for(i=1;i<=100;i++){
		sumSQ = sumSQ + i*i;
	}

	printf("sumSQ = %i\n",sumSQ);

	//SQUARE OF THE SUM

	for(i=0;i<=100;i++){
		sqSUM += i;
	}

	sqSUM = sqSUM * sqSU;M

	res = sqSUM - sumSQ;

	printf("sqSUM = %i\n",sqSUM);

	printf("Resultado = %i", res);

	return 0;
}