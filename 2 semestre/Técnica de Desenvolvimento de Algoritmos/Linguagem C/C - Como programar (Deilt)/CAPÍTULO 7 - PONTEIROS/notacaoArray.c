/*Copiando uma string usando a notação de array e a notação de ponteiro */
#include <stdio.h>

void copyl(char *, const char *);
void copy2(char *, const char *);

int main(){
	
	char stringl[10], *string2 = "Hello",
	string3[10], string4[] = "Good Bye";

	copyl(stringl, string2);
	printf("stringl = %s\n", stringl);

	copy2(string3, string4);
	printf("string3 = %s\n", string3);

	return 0;

}

/* copia s2 para sl usando a notação de array */
void copyl(char *sl, const char *s2){

	int i;
	for (i = 0; sl[i] = s2[i]; i++)	// <--  a cópia de cada caractere é feita no cabeçalho do for. Quando encontar o NULL, é encerrado o loop
		;/* nada e feito no corpo do loop */
}


/* copia s2 para sl usando a notação de ponteiro */
void copy2(char *sl, const char *s2){

	for ( ; *sl = *s2; sl++, s2++)
		;/* nada e feito no corpo do loop */