#include <stdio.h>

float calcularMedia(float n1, float n2, float n3);

main()
{
	//vars
	float a, b, c, media;
	
	printf("MEDIA ARITMETICA - SUB-ROTINA\n\n");
	
	printf("Digite a 1o nota: ");
	scanf("%f", &a);
	
	printf("Digite a 2o nota: ");
	scanf("%f", &b);
	
	printf("Digite a 3o nota: ");
	scanf("%f", &c);
	
	media = calcularMedia(a, b, c);
	
	printf("\nMedia: %.2f", media);
}

float calcularMedia(float n1, float n2, float n3)
{
	float m;
	
	m = (n1 + n2 + n3) / 3;
	
	return m;
}
