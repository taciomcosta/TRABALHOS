/* Usando os operadores & e * */

#include <stdio.h>
int main() {

	int a; /* a e um inteiro */
	int *aPtr; /* aPtr e um ponteiro para um inteiro */
	a = 7;
	aPtr = &a; /* aPtr define o endereço de a */

	printf("0 endereço de a e %p\n O valor de aPtr e %p\n\n", &a, aPtr);
	printf("O valor de a e %d\n O valor de *aPtr e %d\n\n", a, *aPtr);
	printf("Sabendo que * e & complementam-se mutuamente. \n&*aPtr = %p\n*&aPtr = %p\n",&*aPtr, *&aPtr);

	return 0;

}