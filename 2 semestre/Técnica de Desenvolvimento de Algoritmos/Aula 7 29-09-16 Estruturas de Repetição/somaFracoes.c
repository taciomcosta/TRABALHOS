#include <stdio.h>

main()
{
	printf("Soma de fracoes\n\n");
	
	//vars
	// 	=> NÃO ESQUEÇA SEMPRE DE INICIALIZAR O ACUMULADOR <=
	float soma = 0, i;
	int n;
	
	//Entrada
	printf("Insira um numero inteiro: ");
	scanf("%d",&n);
	
	//Processamento
	for ( i=1; i<=n; i++ )
	{
		soma += 1/i;
	}
	
	//Saída
	printf("Soma = %.2f", soma);
}
