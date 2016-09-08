#include <stdio.h>

main()
{
	//vars
	float salarioBruto, valorPrestacao;
	
	printf("\t\t\tPrefeitura de Guarulhos\n\n");
	
	//Entradas	
	printf("Insira o valor do salario bruto: ");
	scanf("%f",&salarioBruto);
	
	printf("Insira o valor da prestacao: ");
	scanf("%f",&valorPrestacao);
	
	//	Processaamento
	if ( valorPrestacao <= salarioBruto*0.3 )
		printf("O emprestimo podera ser concedido");
	else
		printf("O emprestimo NAO podera ser concedido");
}
