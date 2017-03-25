#include <stdio.h>
#include <math.h>

main()
{
	//	vars
	float massa, altura, IMC;
	
	printf("\t\t\tIndice IMC \n\n");
	
	//	Entradas
	printf("Insira a massa corporal em Kg: ");
	scanf("%f",&massa);
	
	printf("Insira a altura: ");
	scanf("%f",&altura);
	
	//	Processamento
	IMC = massa / pow( altura, 2);
	
	//	Saída
	if ( IMC <= 19 )
	
		printf("IMC: %.2f\nClassificacao: Abaixo do peso", IMC);
		
	else if ( IMC <= 25 )
	
		printf("IMC: %.2f\nClassificacao: Peso Normal", IMC);
		
	else if ( IMC <= 30 )
	
		printf("IMC: %.2f\nClassificacao: Sobre Peso", IMC);
		
	else if ( IMC <= 40 )
	
		printf("IMC: %.2f\nClassificacao: Obeso", IMC);
		
	else
	
		printf("IMC: %.2f\nClassificacao: Obeso Morbido", IMC);
	
	
	
	
}
