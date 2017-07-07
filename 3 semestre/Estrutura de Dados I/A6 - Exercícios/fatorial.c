#include <stdio.h>

int fatorial(int x);

main()
{
	//vars
	int n, fat;
	
	printf("FATORIAL\n\n");
	
	//Entrada
	printf("Digite N: ");
	scanf("%d", &n);
	
	//Processamento
	fat = fatorial(n);
	
	//Saída
	printf("\n%d! = %d", n, fat);
}

int fatorial(int x)
{
	//vars
	int i, 
		res = 1;
	
	for (i = 1; i <= x; i++) {
		res *= i;
	}
	
	return res;
}
