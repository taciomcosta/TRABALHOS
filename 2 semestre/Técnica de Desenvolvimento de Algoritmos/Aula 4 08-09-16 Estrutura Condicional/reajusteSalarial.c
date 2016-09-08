#include <stdio.h>

main()
{
	//vars
	float salarioAtual;
	
	printf("\t\t\tReajuste Salarial\n\n");
	
	//Entrada
	printf("Insira o salario atual: ");
	scanf("%f",&salarioAtual);
	
	//Processamento e Saída
	if ( salarioAtual <= 1500 )
	{
		salarioAtual *= 1.3;
		printf("Novo Salario = %.2f", salarioAtual);
	}
	else
		printf("O funcionario nao possui direito ao reajuste salarial");
	
}
