#include <stdio.h>
#include <math.h>

void calcularArea(float a, float b, float c);

main()
{
	//vars
	float l1, l2, l3;
	
	printf("AREA DE UM TRIANGULO\n");
	
	printf("Insira o 1o lado: ");
	scanf("%f", &l1);
	
	printf("Insira o 2o lado: ");
	scanf("%f", &l2);
	
	printf("Insira o 3o lado: ");
	scanf("%f", &l3);
	
	calcularArea(l1, l2, l3);
}

void calcularArea(float a, float b, float c)
{
	float sp, area;
	
	if (a < b+c && b < a+c && c < a+b) {
		sp = (a +  b + c) / 2;
		area = sqrt(sp * (sp-a) * (sp-b) * (sp-c));
		printf("\nAREA = %.1f", area);
	} else {
		printf("\nOS LADOS NAO FORMAM UM TRIANGULO!!!\n");
	}
}
