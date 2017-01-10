#include <stdio.h>
main()
{
	printf("Serie de Fibonacci\n\n");

	//vars
	int num, n1=1, n2=1, aux, i;

	//Entrada
	printf("Insira o numero de termos: ");
	scanf("%d",&num);

	//Processamento
	printf("1\n1\n");

	for(i=1;i<=num-2;i++)
	{
		aux = n2;
		n2 += n1;
		n1 = aux;
		printf("%d\n",n2);
	}
}
