#include <stdio.h>

main()
{
	//	vars
	int a,b;
	
	printf("\t\t\tDisisao de dois numeros inteiros\n\n");
	
	//	Entradas
	printf("Insira o dividendo: ");
	scanf("%d",&a);
	
	printf("Insira o divisor: ");
	scanf("%i",&b);
	
	//	Processamento e Saída
	if ( b == 0 )	
		printf("Nao eh possivel efetuar uma divisao por zero");
		else if ( a%b == 0 )
			printf("%i eh divisivel por %d", a, b);
			else
				printf("%i NAO eh divisel por %d", a , b);
		
}
