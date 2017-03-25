#include <stdio.h>

main()
{
	
	printf("Numero Primo\n\n");
	
	// => Inicialize SEMPRE o contador!!! <=
	int num, divisor, cont = 0;
	
	//Entrada
	printf("Insira um numero inteiro: ");
	scanf("%d",&num);
	
	//Processamento
	for(divisor=1; divisor<=num; divisor++)
		if( num%divisor == 0 )
			cont++;
	
	//Saída
	if ( cont == 2 )
		printf("%i eh primo\n", num);
	else
		printf("%i NAO eh primo\n", num);
	
	
	printf("\n\"A verdade eh simples. Nao seria isso uma dupla \nmentira?\" - Nietzsche, Friedrich");
	
	
}
