#include <stdio.h>


main()
{
	
	//	vars
	float media;
	
	printf("\t\t\tBolsas de Estudo\n\n");
	
	//	Entrada
	printf("Insira a media do aluno: ");
	scanf("%f", &media);
	
	//	Processamento e Saída
	if ( media < 7 )
	
		printf("Recomendacao: Nao recomendado\n");
	else if ( media < 8 )
	
		printf("Recomendacao: Recomendado\n");
		else if ( media < 9 )
		
			printf("Recomendacao: Fortemente recomendado\n");
			else
			
			printf("Recomendacao: Altamente recomendado\n");
			
}
