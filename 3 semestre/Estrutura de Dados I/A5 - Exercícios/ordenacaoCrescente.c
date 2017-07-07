#include <stdio.h>

void ordenar(int n1, int n2, int n3);

main()
{
	//vars
	int a, b, c;
	
	printf("ORDENACAO DE TRES NUMS\n");
	
	printf("\nDigite a: ");
	scanf("%i", &a);
	
	printf("Digite b: ");
	scanf("%d", &b);
	
	printf("Digite c: ");
	scanf("%d", &c);
	
	ordenar(a, b, c);
}

//Ordena três valores de forma crescente
void ordenar(int n1, int n2, int n3)
{
	if (n1 <= n2 && n1 <= n3) {
		if (n2 <= n3)
			printf("\n%d %d %d", n1, n2, n3);
		else
			printf("\n%d %d %d", n1, n3, n2);
	} else if (n2 <= n1 && n2 <= n3) {
		if (n1 <= n3)
			printf("\n%d %d %d", n2, n1, n3);
		else
			printf("\n%d %d %d", n2, n3, n1);
	} else {
		if (n1 <= n2)
			printf("\n%d %d %d", n3, n1, n2);
		else
			printf("\n%d %d %d", n3, n2, n1);
	}
}
