#include <stdio.h>

main()
{
	int num, divisor=1;
	
	printf("Divisores de um numero\n\n");
	
	//Entrada
	printf("Insira um numero inteiro: ");
	scanf("%d", &num);
	
	//Processamento e Saída
	while ( divisor <= num )
	{
		if ( num%divisor == 0 )
			printf("%d\n", divisor);
			divisor++;	
	}
	
	printf("\n\"A vinganca nunca eh plena, mata a alma e a envenena\" - Madruga, Seu");
}
