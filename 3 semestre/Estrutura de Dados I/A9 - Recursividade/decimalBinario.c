#include <stdio.h>

int bin(int k) {
	if (k < 2) {
		return k;
	}
	
	return (10 * bin (k/2)) + k % 2;
}

main()
{
	int num;
	
	printf("DECIMAL -> BINARIO\n\n");
	
	printf("Digite um numero positivo: ");
	scanf("%d", &num);
	
	printf("%d = %d", num, bin(num));
}
