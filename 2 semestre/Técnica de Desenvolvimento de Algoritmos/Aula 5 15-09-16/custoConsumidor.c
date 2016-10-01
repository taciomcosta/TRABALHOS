#include <stdio.h>

main()
{
	//	vars
	float custoFabrica, porcentagemDistribuidor, impostos, custoConsumidor;
	
	
	printf("\t\t\tCusto Consumidor\n\n");
	
	//	Entrada
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custoFabrica);
	
	//	Processamento
	if ( custoFabrica <= 12000 )
	{
		porcentagemDistribuidor = custoFabrica * 0.05;
	}
	else if ( custoFabrica <= 25000 )
	{
		porcentagemDistribuidor = custoFabrica * 0.1;
		impostos = custoFabrica * 0.15;
	}
	else
	{
		porcentagemDistribuidor = custoFabrica * 0.15;
		impostos = custoFabrica * 0.2;
	}
	
	custoConsumidor = porcentagemDistribuidor + impostos + custoFabrica;
	
	//Saída
	printf("Custo consumidor: R$%.2f", custoConsumidor);
	
}
