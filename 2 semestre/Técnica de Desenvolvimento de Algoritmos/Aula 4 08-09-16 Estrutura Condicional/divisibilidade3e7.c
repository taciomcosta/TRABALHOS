#include <stdio.h>

main()
{
	//vars
	int n;
	
	printf("\t\t\tNumero divisivel por 3 e por 7\n\n");
	
	//Entradas
	printf("Insira um numero inteiro: ");
	scanf("%i",&n);
	
	//Processamento e Saída
	if ( ( n%3 == 0 ) && ( n % 7 == 0 ) )
		printf("%i eh divisivel por 3 e por 7", n);
	else
		printf("%i NAO eh divisivel por 3 e por 7", n);
		
	
}
