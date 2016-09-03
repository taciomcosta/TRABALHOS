#include <stdio.h>

int main(){

	int cont=0,i=0,j=0,res=0;
	long unsigned int n=600851475143;//long unsigned int 'What the hell? G_G'
	long unsigned int n2 = n;

	while(n!=1){
		for(i=2;n%i!=0;i++);
		n = n/i;
		for(j=1;j<=i;j++){//validando se 'i' é ou não é primo
			if(i%j==0) 
				cont++;
		}
		if ((cont==2) && (i>res)) 
{			res = i;
			cont=0;
		}

	}
	printf("Maior primo de %lu = %i\n",n2,res);
	return 0;
}

/*
TESTE DE MESA
n | i | j | cont | res


*/