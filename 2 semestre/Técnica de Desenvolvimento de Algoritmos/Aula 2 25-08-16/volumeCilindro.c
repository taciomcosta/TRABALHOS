#include <stdio.h>

main()
{
	
	//vars
	float r,h,v,a;
	
	printf("\t\t\tVolume e area de um cilindro\n\n");
	
	//Entrada
	printf("Insira o raio do cilindro: ");
	scanf("%f",&r);
	printf("Insira o altura do cilindro: ");
	scanf("%f",&h);
	
	//Processamento
	v = 2 * 3.14 * r * (h+r);
	a = 3.14 * h * r * r ;
	
	//Saída
	printf("Volume = %.2f\nArea = %.2f", v, a);
	
}
