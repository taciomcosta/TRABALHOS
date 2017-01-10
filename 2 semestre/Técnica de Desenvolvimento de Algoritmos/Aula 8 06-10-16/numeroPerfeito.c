//Exemplo de numero perfeito: 6, pois os divisores de 6 (1, 2 e 3 ), exceto 6, quando somados resultam 6

#include <stdio.h>

main()
{
	//vars
	int num, divisor, somaDiv =0;
	
	printf("Numero Perfeito\n");
	
	//Entrada
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	for ( divisor = 1; divisor<num; divisor++ )
	{
		if ( num%divisor == 0 )
		{
			somaDiv += divisor;
		}
	}
	
	
	if( somaDiv == num )
		printf("%d eh perfeito!", num);
	else
		printf("%i NAO eh perfeito", num);
		
	printf("\n\n\"Leve o tempo que for para descobrir qual eh a tua praia,\n mas depois que a encontrar, nao recue diante\n de nenhum pretexto\" - Zaratustra, Assim falou");
	
	
}
