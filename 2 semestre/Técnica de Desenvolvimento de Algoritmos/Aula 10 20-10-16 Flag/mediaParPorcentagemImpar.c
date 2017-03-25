#include <stdio.h>

main()
{
	printf("Media dos Pares e Porcentagem dos Impares e Pares\n\n");

	//vars
	int num, contador=0, contPar=0, contImpar=0;
	float mediaPar=0, pImpar=0, pPar=0;

	//Entrada
	printf("Insira um numero inteiro: ");
	scanf("%i", &num);

	while( num != 0 )
	{
		contador++;

		if( num%2 == 0 )
		{
			contPar++;
			mediaPar += num;
		}

		else
			contImpar++;

		printf("Insira um numero inteiro: ");
		scanf("%i", &num);
	}

	//Processamento
	if(contImpar != 0)
		pImpar = contImpar*100/contador;
	if(contPar != 0)
		pPar = contPar*100/contador;
	mediaPar /= contPar;

	//Saída
	printf("\nMedia dos pares %.1f\n", mediaPar);
	printf("Porcentagem Par:%.1f%%\n", pPar);
	printf("Porcentagem Impar:%.1f%%\n", pImpar);

}
