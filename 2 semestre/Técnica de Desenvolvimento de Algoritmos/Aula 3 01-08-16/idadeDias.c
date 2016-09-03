//Algoritmo - Idade em dias
#include <stdio.h>

main()
{
	 
	//	vars
	int anos,meses,dias,idade;
	  
	printf("\t\t\tIdade em dias\n\n");
	
	//Entrada
	printf("Insira o num de anos: ");
	scanf("%i",&anos);
	
	printf("Insira o num de meses: ");
	scanf("%i",&meses);
	
	printf("Insira o num de dias: ");
	scanf("%i",&dias);
	
	//PROCESSAMENTO
	idade = ( anos * 365 ) + ( meses * 30 ) + dias;
	
	//SAÍDA
	printf("\nIdade em dias: %i", idade);
	
	
}
