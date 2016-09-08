#include <stdio.h>

main()
{
	//vars
	float valorCompra, valorVenda, lucro;
	
	printf("\t\t\tValor \n\n");
	
	//	Entrada
	printf("Insira o valor da compra: ");
	scanf("%f",&valorCompra);
	
	//Processamento
	if ( valorCompra < 10 )
		lucro = valorCompra * 0.7;
		else if ( valorCompra < 30 ) //valorCompra >= 10
			lucro = valorCompra * 0.5;
			else if ( valorCompra < 50 ) //valorCompra >= 30
				lucro = valorCompra * 0.4;
				else
					lucro = valorCompra * 0.3;
					
	valorVenda = valorCompra + lucro;
	
	//Saída
	printf("Valor Compra: R$ %.2f\n", valorCompra);
	printf("Valor Venda: R$ %.2f\n", valorVenda);
	
		
	
	
}
