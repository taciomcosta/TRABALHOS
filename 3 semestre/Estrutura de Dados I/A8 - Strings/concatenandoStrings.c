#include <stdio.h>
#include <string.h>

main()
{
	char nome[] = "fulano";
	char sobrenome[] = " de tal";
	char nomeCompleto[15];
	//nome = fulano de tal
	strcat(nome, sobrenome);
	//nomeCompleto = fulano de tal
	strcpy(nomeCompleto, nome);
	puts(nomeCompleto);
}
