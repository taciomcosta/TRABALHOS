#include <stdio.h>

main()
{
	//vars
	float p, m;
	
	printf("\t\t\tChuva em pol ==> Chuva em mm\n\n");
	
	//Entrada
	printf("Digite a quantidade de chuva em polegadas: ");
	scanf("%f",&p);
	
	//Processamento
	m = p * 25.4;
	
	//Saída
	printf("Chuva em mm: %.1f", m);
	
}
