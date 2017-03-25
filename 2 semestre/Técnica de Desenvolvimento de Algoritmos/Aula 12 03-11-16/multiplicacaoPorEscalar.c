#include <stdio.h>

main()
{
	int v[8], res[8], i, x;
	
	printf("Multiplicacao por Escalar \n\n");
	
	//Entrada
	for( i=0; i<8; i++)
	{
		printf("Digite v[%i]: ", i);
		scanf("%d",&v[i]);	
	}
	
	printf("Digite um numero X qualquer: ");
	scanf("%d", &x);
	
	//Processamento
	for( i=0; i<8; i++)
	{
		res[i] = v[i] * x;
	}
	
	//Saída
	printf("\n\nVetor Inicial: \n");
	for( i=0; i<8; i++)
	{
		printf("%d  ", v[i]);
	}
	
	printf("\n\nVetor Final: \n");
	for( i=0; i<8; i++)
	{
		printf("%d  ", res[i]);
	}
	
	
}
