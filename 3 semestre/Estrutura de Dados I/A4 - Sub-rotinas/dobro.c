#include <stdio.h>

int dobrar(int n);

main()
{
	//vars
	int num, i;
	
	printf("DOBRO DE TREA NUMEROS - SUB-ROTINA\n\n");
	
	for (i = 0; i < 3; i++) {
		printf("Digite um num: ");
		scanf("%i", &num);
		printf("O dobro de %d eh %d\n\n", num, dobrar(num));	
	}
}

int dobrar(int n){
	return 2 * n;
}
