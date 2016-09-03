#include <stdio.h>

int main(){

	int cont=0,contP=0,i,j;

	for(i=2;contP<=10001;i++){
		for(j=1;j<=i;j++){
			if(i%j==0) 
				cont++;
		}
		if(cont==2){
			contP++;
			printf("%i° -> %i\n",contP,i);
		}
		cont=0;

	}

	return 0;
}