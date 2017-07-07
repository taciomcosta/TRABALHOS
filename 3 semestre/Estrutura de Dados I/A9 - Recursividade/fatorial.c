#include <stdio.h>

/*
	Definição da função
	fat(x) = { x * fat(x-1); se x > 1
		 { 1; se x = 1
*/

int fatorial(int n)
{
	if (n > 1) {
		return n * fatorial(n-1);
	} else {
		return 1;
	}
}

main()
{
	int num;
	
	printf("FATORIAL - FUNCAO RECURSIVA\n\n");
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	printf("%d! = %d", num, fatorial(num));
}
