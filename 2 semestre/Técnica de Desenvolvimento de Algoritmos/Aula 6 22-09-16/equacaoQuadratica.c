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
	
	//Sa�da
	
	//Se delta < 0, ent�o n�o h� ra�zes reais
	if ( delta < 0 )
		printf("Nao existem raizes reais para a equacao\n");
	//Sen�o, se delta = 0, ent�o a ra�z � dupla
	else if ( delta == 0 )
	{
		x1 = -b / ( 2 * a );
		printf("x = %.2f\n", x1);
	}
	//Sen�o, delta > 0, logo, h� duas ra�zes distintas
	else
	{
		x1 = ( -b - sqrt(delta) ) / ( 2 * a );
		x2 = ( -b + sqrt(delta) ) / ( 2 * a );
		printf("x1 = %.2f\n", x1);
		printf("x2 = %.2f\n", x2);
	}
	 
		
}
