/*
*Esse algoritmo encontra o maior número palindrômico que é um produto de dois números de 3 dígitos
*/

#include <stdio.h>

int main(){

	
	int nR = 0;
	int mult;
	int maior=0;
	int n1,n2;
	int n,num;
		for (n1=100;n1<=999;n1++){
			for (n2=n1;n2<=999;n2++){
				n = n1*n2;
				num = n;
				nR = 0;
				if(n<=99999)
					mult = 10000;
				else
					mult = 100000;

				while (mult>=1){
					nR = nR + ((n%10)*mult);
					if (n>=10){
						n = n-(n%10);
						n = n/10;
					}
					mult /= 10;
				}

				if((nR==num) && (num>maior)) 
					maior = nR;
					if(n1*n2==maior)
						printf("%i x %i = %i\n",n1,n2,maior);
			}
		}

	printf("%i\n",maior);
	
	

	return 0;
}

