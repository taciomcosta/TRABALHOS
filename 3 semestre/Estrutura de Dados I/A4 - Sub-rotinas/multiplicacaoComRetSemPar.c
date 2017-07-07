//sub-rotina COM retorno e SEM parâmetros

#include <stdio.h>

int multiplicar();

main()
{
	int res;
	
	printf("MULTIPLICACAO - SUB-ROTINA\n\n");
	
	res = multiplicar();
	
	printf("Resultado: %d", res);
}

int multiplicar()
{
	int a, b, p;
	
	printf("Digite A: ");
	scanf("%d", &a);
	
	printf("Digite B: ");
	scanf("%d", &b);
	
	p = a * b;
	
	return p; //return a + b;
}
