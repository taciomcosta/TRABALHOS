#include <stdio.h>

main()
{
	char nome[50];
	
	printf("GETS X SCANF\n\n");
	
	printf("Digite seu nome (gets): ");
	gets(nome);
	puts(nome);
	
	//scanf(s� l� at� o espa�o em branco)
	printf("Redigite seu nome (scanf): ");
	scanf("%s", &nome);
	puts(nome);
}
