#include <stdio.h>

main()
{
	//	vars
	float x,y;
	
	printf("\t\t\t\tQ U A D R A N T E S\n\n");
	
	//	Entrada
	printf("Insira a abcissa do ponto: ");
	scanf("%f",&x);

	printf("Insira a ordenada do ponto: ");
	scanf("%f",&y);
	
	//	Processamento
	if ( x>0 && y>0 )
		printf("O ponto esta no 1o quadrante\n");
		
	else if ( x<0 && y>0 )
		printf("O ponto esta no 2o quadrante\n");
		
	else if ( x<0 && y<0 )
		printf("O ponto esta no 3o quadrante\n");
			
	else if ( x>0 && y<0 )
		printf("O ponto esta no 4o quadrante\n");
				
	else if ( x==0 && y==0 )
		printf("O ponto esta na origem\n");
	
	else
		printf("O ponto esta em um dos eixos\n");
		
	
}
