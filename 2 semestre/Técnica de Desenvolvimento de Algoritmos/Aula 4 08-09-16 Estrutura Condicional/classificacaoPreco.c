#include <stdio.h>

main()
{
	//	vars
	float precoAtual, novoPreco;
	
	printf("\t\t\tClassificao de um produto\n\n");
	
	//	Entrada
	printf("Insira o preco atual do produto: ");
	scanf("%f",&precoAtual);
	
	
	//Processamento
	//Detereminando novo preço	
	if ( precoAtual < 50 )
		novoPreco = precoAtual * 1.05;
		else if ( precoAtual <= 100)
			novoPreco = precoAtual * 1.1;
			else
				novoPreco = precoAtual * 1.15;
				
	printf("Novo preco: R$ %.2f\n", novoPreco);
	
	//Detereminando classificação
	if( novoPreco < 80 )
		printf("Classificacao: Barato");
		else if ( novoPreco <= 120 )
			printf("Classificacao: Normal");
			else if ( novoPreco <= 200)
				printf("Classificacao: Caro");
				else
					printf("Classificacao: Muito caro");
					
}
