#include <stdio.h>

int main(){
	int n1,n2,ax,sum;

	n1 = 0;
	n2 = 1;

	while(n1<4000000){

		if (n1%2==0)
			sum +=n1;
		
		ax = n1;
		n1 = n2;
		n2 += ax;
	}

	printf("sum = %i", sum);

	return 0;
}