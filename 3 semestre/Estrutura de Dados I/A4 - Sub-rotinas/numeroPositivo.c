#include <stdio.h>

int ehPositivo(int n);

main()
{
	int num;
	
	printf("NUMERO POSITIVO OU NEGATIVO\n\n");
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	if (ehPositivo(num))
		printf("%d eh positivo", num);
	else
		printf("%d eh negativo", num);
		
}

int ehPositivo(int n)
{
	if (n > 0)
		return 1;
	else
		return 0;
}
