#include <stdio.h>
#include <math.h>

int main(){

	double b,a,c;

	a=1;
	b=1;
	for(b=1;b<=999;b++){
		for(a=1;a<=999;a++){
			c = sqrt(a*a+b*b);
			if (a+b+c==1000){
				printf("a=%.0f b=%.0f c=%.0f\n",a,b,c);
				printf("a*b*c = %.0f",a*b*c);
			}
		}

	}
		


	return 0;
	
	
}