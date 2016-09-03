/* Imprimir um caractere de uma string de cada vez */
/* usando um ponteiro nao-constante para um dado constante */

#include <stdio.h>

void imprimeCaracteres(const char *);

int main(){

	char string [ ] = "imprime caracteres de uma string";	/*string[] é uma constante*/ 
	printf("A string e:\n");
	imprimeCaracteres(string);
	putchar('\n');
	return 0;
}

void imprimeCaracteres (const char *s) { //--> const char *s é um ponteiro não-constante para um dado constante (string[])

	for ( ; *s != '\0' ; s++) /* nenhuma inicialização */
		putchar(*s);

}