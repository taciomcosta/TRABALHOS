//	=>	N�O SE ESQUE�A NUNCA, NEVER, JAM�; DE INICIALIZAR OS CONTADORES E ACUMULADORES!!!!	<=
#include <stdio.h>

main()
{
	//	=>	N�O SE ESQUE�A NUNCA, NEVER, JAM�; DE INICIALIZAR OS CONTADORES E ACUMULADORES!!!!	<=
	float fatorial=1, num, numI;
	
	printf("Fatorial de um numero\n\n");
	
	//Entrada
	printf("Insira um numero: ");
	scanf("%f",&num);
	numI = num;
	
	//Processamento
	while( num>1 )
	{
		fatorial *= num;
		num--;
	}
	
	//Sa�da
	printf("%.0f! = %.0f", numI, fatorial);
	
	
}
//	=>	N�O SE ESQUE�A NUNCA, NEVER, JAM�; DE INICIALIZAR OS CONTADORES E ACUMULADORES!!!!	<=
