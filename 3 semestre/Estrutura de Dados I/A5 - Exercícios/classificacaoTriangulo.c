#include <stdio.h>

void classificarTriangulo(int a, int b, int c);

main()
{
	//vars
	int l1, l2, l3;
	
	printf("CLASSIFICACAO DE UM TRIANGULO\n");
	
	printf("Digite a: ");
	scanf("%d", &l1);
	
	printf("Digite b: ");
	scanf("%d", &l2);
	
	printf("Digite c: ");
	scanf("%d", &l3);
	
	classificarTriangulo(l1, l2, l3);
	
}

void classificarTriangulo(int a, int b, int c)
{
	if (a < b+c && b < a+c && c < a+b) {
		if (a == b && b == c) {
			printf("\nTRIANGULO EQUILATERO\n");
		} else if (a != b && b != c) {
			printf("\nTRIANGULO ESCALENO");
		} else { 
			printf("\nTRIANGULO ISOCELES\n");
		}
	} else {
		printf("\nOs lados nao formam um triangulo!\n");
	}
}
