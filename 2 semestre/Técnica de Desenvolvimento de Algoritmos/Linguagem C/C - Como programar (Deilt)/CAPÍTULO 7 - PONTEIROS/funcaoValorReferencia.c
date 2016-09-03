/* Eleva uma variável ao cubo usando chamada por valor */

/*#include <stdio.h>

int cuboPorValor(int);

int main() {

	int numero = 5;
	printf("0 valor original do numero e %d\n", numero);
	numero = cuboPorValor(numero);
	printf("0 novo valor do numero e %d\n", numero);
	return 0;

}
	
	
	int cuboPorValor(int n)
{
	return n * n * n;
	/* eleva ao cubo a variável local n */
//}

*************************************************************************************************************************************

/* Eleva uma variável ao cubo usando chamada por referência */

/*#include <stdio.h>
int cuboPorValor(int);
int main() {

	int numero = 5;
	printf("0 valor original do numero e %d\n", numero);
	numero = cuboPorValor(&numero);
	printf("0 novo valor do numero e %d\n", numero);
	return 0;

}

void cuboPorValor(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
