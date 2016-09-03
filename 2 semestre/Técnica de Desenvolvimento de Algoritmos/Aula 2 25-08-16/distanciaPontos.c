#include <stdio.h>
#include <math.h>

main()
{
	//vars
	float xb,xa,yb,ya,d;
	
	printf("\t\t\tDistancia entre dois pontos\n\n");
	
	//Entradas
	printf("Insira Xa: ");
	scanf("%f", &xa);
	
	printf("Insira Ya: ");
	scanf("%f",&ya);
	
	printf("Insira Xb: ");
	scanf("%f",&xb);
	
	printf("Insira Yb: ");
	scanf("%f",&yb);
	
	//Processamento
	d = sqrt( pow(xb-xa,2) + pow(yb-ya,2) );
	
	//Saída
	printf("Distancia entre A e B = %.2f", d);
	
	
}
