// n-ésimo numero de fibonacci
#include <stdio.h>

int fibonacci(int n)
{
	if (n > 2) { //Termo recursivo
		return fibonacci(n-1) + fibonacci(n-2);
	} else if (n <= 2) { //Caso base
		return 1;
	}
}

main()
{
	int num;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	
	printf("%do. numero: %d", num, fibonacci(num));
}
