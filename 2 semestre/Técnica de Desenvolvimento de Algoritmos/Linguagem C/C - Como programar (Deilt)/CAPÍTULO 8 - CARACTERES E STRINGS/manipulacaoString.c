#include <stdio.h>
#include <string.h>

int main(){
	
//FUNÇÕES DE CÓPIA
	/* USANDO STRCPY E STRNCPY */
	char x[] = "Feliz Aniversário";
	char y[20], z [6] ;
	printf("%s%s\n%s%s\n",
	"A string no array x e: ", x,
	"A string no array y e: ", 
	strcpy(y, x));//copia x para y
	strncpy(z, x, 5); z[5] = '\0';//copia os primeiros caracteres de x para z
	printf("A string no array z e: %s\n", z);	

	/*USANDO STRCAT E STRNCAT*/
	char sl[20] = "Feliz ";
	char s2[] = "Ano Novo ";
	char s3 [40] = " ";
	printf("sl = %s\ns2 = %s\n", sl, s2);

	printf("strcat(sl, s2) = %s\n", strcat(sl, s2));
	//strcat copia s2 para s1 e sobrescreve o ultimo char de s1 com o 1° de s2

	printf("strncat(s3, sl, 6) = %s\n", strncat(s3, sl, 6));
	//strncat copia os 6 primeiros chars de s2 para s1 e sobrescreve o ultimo char de s1 com o 1° de s2



	printf("strcat(s3, sl) = %s\n", strcat(s3, sl) ) ;



//FUNÇÕES DE COMPARAÇÃO
	/*USANDO STRCMP E STRNCMP*/
	char *sl = "Feliz Ano Novo";
	char *s2 = "Feliz Ano Novo";
	char *s3 = "Feliz Natal";

	printf ("%s%s\n%s%s\n%s%s\n\n%s%2d\ns&s%2d\n%s%2d\n\n",
	"s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
	"strcmp(sl, s2) = ", strcmp(sl, s2),
	"strcmp(sl, s3) = ", strcmp(sl, s3),
	"strcmp(s3, sl) = ", strcmp(s3, sl));
	//se s1 > s2, retornará um valor maior que 0
	//se s1 = s2, retornará 0
	//se s1 < s2, retornará um valor menor que 0

	printf ("%s%2d\n%s%2d\n%s%2d\n",
	"strncmp(sl, s3, 6) = ", strncmp(sl, s3, 6),
	"strncmp(sl, s3, 7) = ", strncmp(sl, s3, 7),
	"strncmp(s3, sl, 7) = ", strncmp(s3, sl, 7));

	//se os n chars de s1 > n chars de s2, retornará um valor maior que 0...



//FUNÇÕES DE PESQUISA
	/*USANDO STRCHR*/
		char *string = "Isso e um teste";
		char characterl = 'm', character2 = ' z ' ;

		if (strchr(string, characterl) != NULL)//localiza a 1° ocorrência do char na string
			printf("\'%c\' foi encontrado em \"%s\".\n", characterl, string);
		else
			printf("\'%c\' nao foi encontrado em \"%s\".\n", characterl, string);

		if (strchr(string, character2) != NULL)
			printf("\'%c\' foi encontrado em \"%s\".\n", character2, string);
		else
			printf("\'%c\' nao foi encontrado em \"%s\".\n", character2, string);

	/*USANDO STRCSPN */
		char *stringl = "O valor e 3.14159";
		char *string2 = "1234567890";
		printf("%s%s\n%s%s\n\n%s\n%s%u",
		"stringl = ", stringl, "string2 = ", string2,
		"Comprimento do segmento inicial de stringl",
		"que nao contem caracteres de string2 = ",
		strcspn(stringl, string2));

	/*USANDO STRPBRK */
		char *stringl = "Isso e um teste";
		char *string2 = "certo";
		printf("%s\"%s\"\n'%c'%s\n\"%s\"\n", "Dos caracteres em ",
		string2, *strpbrk(stringl, string2),//localiza na s1 a 1° ocorrência de qualquer char da s2
		" e o primeiro caractere a aparecer em ", stringl);

	/*USANDO STRRCHR*/
		char *stringl = "Um zoo tem muitos animais incluindo zebras";
		int c = 'z';
		printf("%s\n%s'%c'%s\"%s\"\n",
		"O restante da stringl iniciando com a",
		"ultima ocorrência do caractere ", c,
		" e: ", strrchr(stringl, c));

	/*USANDO STRSPN */
		char *stringl = "O valor e 3.14159";
		char *string2 = "arelOov ";

		printf("%s%s\n%s%s\n\n%s\n%s%u\n",
		"stringl = ", stringl, "string2 = ",
		string2, "Comprimento do segmento inicial da stringl",
		"contendo apenas caracteres da string2 = ",
		strspn(stringl, string2));

	/*USANDO STRSTR*/
		char *stringl = "abcdefabcdef";
		char *string2 = "def";

		printf("%s%s\n'%s%s\n\n%s\n%s%s\n",
		"stringl = ", stringl, "string2 = ",
		string2, "O restante da stringl iniciando com a",
		"primeira ocorrência de string2 e: ",
		strstr(stringl, string2));

	/*USANDO STRTOK*/
		char string[] = "Esta e uma frase com 7 tokens";
		char *tokenPtr;

		printf ("%s\n%s\n\n%s\n",
		"A string a ser dividida em tokens e:", string,
		"Os tokens sao: ");
		tokenPtr = strtok(string, " ");

		while (tokenPtr != NULL) {
			printf("%s\n", tokenPtr);
			tokenPtr = strtok(NULL," ");
		}



//FUNÇÕES DE MEMÓRIA
	/*USANDO MEMCPY*/
	char sl[17], s2[] = "Copie esta string";
	memcpy(sl, s2, 17); //copia os 17 chars de s2 para s1, e retorna um ponteiro para o objeto resultante
	printf ("%s\n%s\"%s\" \n",
	"Depois de s2 ser copiada para sl com memcpy,",
	"sl fica ", sl);

	/*USANDO MEMMOVE*/
	char x[] = "Lar Doce Lar";
	printf("%s%s\n",
	"A string no array x antes de memmove e:", x);
	printf("%s%s\n",
	"A string no array x depois de memmove e:",
	memmove(x, &x[4], 8));

	/*USANDO MEMCMP*/
	char sl[] = "ABCDEFG", s2[] = "ABCDXYZ";
	printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
	"sl = ", sl, "s2 = ", s2,
	"memcmp(sl, s2, 4) = ", memcmp(sl, s2, 4),
	"memcmp(sl, s2, 1) = ", memcmp(sl, s2, 7),
	"memcmp(s2, sl, 7) = ", memcmp(s2, sl, 7));

	/*USANDO MEMCHR*/
	char *s = "Isso e uma string";
	printf("%s\'%c\'%s\"%s\"\n",
	"0 restante de s depois do caractere ", 'r',
	" ser encontrado e ", memchr(s, 'r', 17));

	/*USANDO MEMSET*/
	char stringl[15] = "BBBBBBBBBBBBBB";
	printf("stringl = %s\n", stringl);
	printf("stringl apos memset = %s\n",
	memset(stringl, 'b', 7));

//OUTRAS FUNÇÕES
	/*USANDO STRERROR*/
		printf("%s\n", strerror(2));

	/*USANDO STRLEN*/
	char *stringl = "abcdefghijklmnopqrstuvwxyz";
	char *string2 = "four";
	char *string3 = "Boston"^
	printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
	"0 comprimento de ", stringl, " e ", strlen(stringl),
	"O comprimento de ", string2, " e ", strlen(string2),
	"0 comprimento de ", string3, " e ", strlen(string3));











return 0;

}