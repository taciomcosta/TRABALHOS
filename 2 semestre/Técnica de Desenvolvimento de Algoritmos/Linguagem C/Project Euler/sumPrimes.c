#include <stdio.h>

int validacao(unsigned long int n){

	unsigned long int d = 1;
	int cont = 0;
	for(d=1;d<=n/2;d++){
		if(n%d==0)
			cont++;
	}
	cont++;

	return cont;

}


int main(){

	unsigned long int n,sum;
	int cont;

	for(n=2;n<=2000000;n++){

		cont = validacao(n);
		if(cont==2) sum+=n;
	}

	printf("%li",sum);

	return 0;
}