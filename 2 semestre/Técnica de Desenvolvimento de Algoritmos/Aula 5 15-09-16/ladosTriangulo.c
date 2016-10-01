#include <stdio.h>
#include <math.h>

main()
{
//	vars
	float a,b,c,p,area;
	
	printf("\t\t\tLados de um triangulo\n\n");
	
//	Entradas
	printf("Insira o lado A do triangulo: ");
	scanf("%f",&a);
	
	printf("Insira o lado B do triangulo: ");
	scanf("%f",&b);
	
	printf("Insira o lado C do triangulo: ");
	scanf("%f",&c);
	
//	Processamento
	if ( ( a<b+c ) && ( b<a+c ) && ( c<a+b ) )
	{
		//Semi-perimetro
		p = ( a + b + c ) / 2;
		printf("%.2f, %.2f, %.2f formam um triangulo\n", a, b, c);
		
		//Área
		area = sqrt( p * (p-a) * (p-b) * (p-c) );
		printf("Area = %.2f\n", area);
		
		
		//Classificação
		if ( a==b && b==c )		
		
			printf("Classificacao: Equilatero\n");
			
		else if( ( a==b ) || ( a==c ) || ( b==c ) )
		
			printf("Classificacao: Isoceles\n");
			
		else
			printf("Classificacao: Escaleno\n");
			
		
	}
	
	else
		printf("%.2f, %.2f, %.2f NAO formam um triangulo", a, b, c);
	
}


