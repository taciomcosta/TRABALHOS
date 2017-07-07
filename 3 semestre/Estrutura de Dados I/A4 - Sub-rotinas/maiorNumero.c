#include <stdio.h>

int max(int n1, int n2);

main()
{
	int a, b, maior;
	
	printf("MAIOR NUMERO - SUB-ROTINA\n\n");
	
	printf("Digite n1: ");
	scanf("%d", &a);
	
	printf("Digite n2: ");
	scanf("%d", &b);
	
	maior = max(a, b);
	
	printf("Maior numero: %d\n", maior);
}

int max(int n1, int n2)
{
	if (n1 >= n2)
		return n1;
	else if (n2 > n1)
		return n2;
}
