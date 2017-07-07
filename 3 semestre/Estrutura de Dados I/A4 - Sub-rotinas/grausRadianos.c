#include <stdio.h>

void imprimirRadianos(float g)
{
	float rad;
	rad = g / 180;
	
	printf("Rad: %.2f pi", rad);
}

main()
{
	printf("GRAUS -> RAD\n\n");
	
	float graus;
	
	printf("Graus: ");
	scanf("%f", &graus);
	
	imprimirRadianos(graus);
}
