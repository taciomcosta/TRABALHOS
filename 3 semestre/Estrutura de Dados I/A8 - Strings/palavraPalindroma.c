#include <stdio.h>
#include <string.h>

main()
{
	char nome[50], inversa[50];
	
	printf("Palavra Palindroma\n\n");
	
	printf("Digite seu nome: ");
	gets(nome);
	
	//Processamento
	strcpy(inversa, nome);
	strrev(inversa);
	
	//Saída
	if(!strcmp(nome, inversa)) {
		printf("Palavra palindroma!\n");
	} else {
		printf("Palavra NAO palindroma!\n");
	}
		
}
