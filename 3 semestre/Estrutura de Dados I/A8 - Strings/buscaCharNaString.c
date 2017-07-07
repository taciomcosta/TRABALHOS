#include <stdio.h>
#include <string.h>

main()
{
	char f1[50], f2[50], f3[100], c;
	int tam1, tam2, i, cont1, cont2;
	
	printf("Digite uma frase: ");
	gets(f1);
	
	printf("Digite uma frase: ");
	gets(f2);
	
	
	//Processamento
	tam1 = strlen(f1);
	tam2 = strlen(f2);
	
	c = 'a';
	
	cont1 = cont2 = 0;
	
	for (i = 0; i <= tam1 ; i++) {
		if (f1[i] == c)
			cont1++;
	}
	
	for (i = 0; i <= tam2; i++) {
		if (f2[i] == c)
			cont2++;
	}
	
	printf("\nA letra '\%c\' aparece %i vez(es) na primeira e %i vez(es) na segunda", c, cont1, cont2);
	
	//retorna 0 se forem iguais
	if (!strcmp(f1, f2)) {
		printf("\nAs frases sao iguais");
	} else {
		strcat(f3, f1);
		strcat(f3, " ");
		strcat(f3, f2);
		printf("\n\nNova frase (frases concatenadas): ");
		puts(f3);
		if (strchr(f3, 'i')) {
			printf("\nA letra 'i' aparece nessa frase");
		}
		if (strstr(f3, "string")) {
			printf("\nA sequencia \"string\" tambem aparece nessa frase");
		}
	}
		
	printf("\nFrase invertida: ");
	strrev(f3);
	puts(f3);
	
}
