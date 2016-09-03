#include <stdio.h>

int main(){

	int i=0, j=1;

	for (i=1;j<=20;j++){
		if(i%j!=0){
			j=1;
			i++;
		}
			
	}

	printf("O menor número divisível por todos números de 1 a 20 é %i",i);

	return 0 ;
}


