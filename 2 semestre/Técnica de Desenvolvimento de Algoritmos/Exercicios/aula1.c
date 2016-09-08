#include <stdio.h>

main(){

	float r,p,a;
	
	//INPUT
	printf("Digite o raio do circulo: ");
	scanf("%f",&r);

	//PROCESS
	p = 2 * 3.14 * r;
	a = 2 * r * r;

	//OUTPUT
	printf("P = %f\nA=%f\n",p,a);

	return 0;

}