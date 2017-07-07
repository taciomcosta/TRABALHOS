// sub-rotina SEM retorno e COM parâmetros

#include <stdio.h>

void calcularMedia(float n1, float n2);

main()
{
	float n1, n2;
	
	printf("MEDIA - SUB-ROTINA\n\n");
	
	printf("Insira N1: ");
	scanf("%f", &n1);
	
	printf("Insira N2: ");
	scanf("%f", &n2);
	
	calcularMedia(n1, n2);
}

void calcularMedia(float n1, float n2)
{
	float media;
	
	media = (n1 + n2) / 2;
	
	printf("Media: %.2f", media);
}
