#include <stdio.h>

main()
{
	printf("Reajuste Salarial\n\n");
	
	//vars
	float salarios[8],novoSalario[8];
	int i;
	
	//Entrada
	
	//Rotina de Leitura
	for(i=0; i<8; i++)
	{
		printf("Digite o %io salario: R$ ", i+1);
		scanf("%f",&salarios[i]);
		
	//Processamento
		novoSalario[i] = salarios[i] * 1.12;
	}
	
	//Saída
	system("cls");
	printf("Salarios Reajustados: \n\n");
	//Rotina de Impressão
	for( i=0; i<8; i++ )
	{
		printf("%io salario: R$ %.2f\n", i+1, novoSalario[i]);
	}
	
	
	
}
