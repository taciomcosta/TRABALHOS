#include <stdio.h>
#include <string.h>

main()
{
	char nomeCompleto[50];
	int tamanho, i;
	int cont = 0;
	
	printf("TAMANHO DO NOME\n\n");
	
	//Entrada
	printf("Digite seu nome completo: ");
	fgets(nomeCompleto, 100, stdin);
	
	//Processamento
	tamanho = strlen(nomeCompleto);
	
	
	for (i = 0; i < tamanho; i++) {
		if (nomeCompleto[i] == ' ')
			cont++;
	}
	
	//Saída
	puts(nomeCompleto);
	printf("\nTamanho: %i", tamanho);
}
