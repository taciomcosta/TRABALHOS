//sub-rotina SEM retorno e SEM parâmetros

#include <stdio.h>

void somar();

main()
{
	printf("SUB-ROTINA DE SOMA\n");
	
	somar();
}

void somar()
{
	int a, b, res;
	
	printf("Insira A: ");
	scanf("%d", &a);
	
	printf("Insira B: ");
	scanf("%d", &b);
	
	res = a + b;
	
	printf("%d + %d = %d", a, b, res);
}
