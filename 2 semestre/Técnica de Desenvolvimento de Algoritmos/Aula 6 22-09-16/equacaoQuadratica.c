#include <stdio.h>
#include <math.h>

main()
{
	//	vars
	float a, b, c, x1, x2, delta;
	
	printf("\t\t\tEquacao quadratica\n\n");
	
	//Entradas
	printf("Insira o coeficiente A: ");
	scanf("%f",&a);
	
	printf("Insira o coeficiente B: ");
	scanf("%f",&b);
	
	printf("Insira o coeficiente C: ");
	scanf("%f",&c);
	
	//Processamento
	delta = pow(b,2) - 4 * a * c;
	
	//Saída
	
	//Se delta < 0, então não há raízes reais
	if ( delta < 0 )
		printf("Nao existem raizes reais para a equacao\n");
	//Senão, se delta = 0, então a raíz é dupla
	else if ( delta == 0 )
	{
		x1 = -b / ( 2 * a );
		printf("x = %.2f\n", x1);
	}
	//Senão, delta > 0, logo, há duas raízes distintas
	else
	{
		x1 = ( -b - sqrt(delta) ) / ( 2 * a );
		x2 = ( -b + sqrt(delta) ) / ( 2 * a );
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	 
		
}
