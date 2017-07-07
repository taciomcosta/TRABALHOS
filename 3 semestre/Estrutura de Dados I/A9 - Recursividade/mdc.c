#include <stdio.h>

int mdc(int x, int y)
{
	if (x > y) {
		return mdc(x-y, y);
	} else if (x < y) {
		return mdc(y, x);
	} else {
		return x;
	}
}

main()
{
	int x, y;
	
	printf("MDC(X, Y)\n\n");
	
	printf("Insira x: ");
	scanf("%d", &x);
	
	printf("Insira y: ");
	scanf("%d", &y);
	
	//Saída
	printf("\nMDC(%d, %d) = %d", x, y, mdc(x, y));
}
