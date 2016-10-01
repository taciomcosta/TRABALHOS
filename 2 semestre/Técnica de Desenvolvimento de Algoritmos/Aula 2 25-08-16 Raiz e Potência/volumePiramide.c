#include <stdio.h>

main()
{
	//vars
	float b,h,v;
	
	printf("\t\t\tVolume de uma piramide\n\n");
	
	//Entrada
	printf("Digite o tamanho da base: ");
	scanf("%f",&b);
	printf("Digite a altura: ");
	scanf("%f",&h);
	
	//Processamento
	v = b*h / 3;
	
	//Saída
	printf("Volume = %.1f", v);
	
	
}
