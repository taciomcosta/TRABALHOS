#include <stdio.h>
#include <string.h>

struct endereco {
	char rua[40];
	int num;
	int complemento;
	char cep[10];
	char cidade[10];
	char estado[10];
};

main()
{
	struct endereco e1;
	struct endereco e2;
	
	// inicializando e1
	strcpy(e1.rua, "Avenida Ipiranga");
	e1.num = 1234;
	e1.complemento = 101;
	strcpy(e1.cep, "90000-123");
	strcpy(e2.cidade, "Guarulhos");
	strcpy(e2.estado, "SP");
	
	// inicializando e2
	strcpy(e2.rua, "Rua Lima e Silva");
	e2.num = 1987;
	e2.complemento = 308;
	strcpy(e2.cidade, "Guarulhos");
	strcpy(e2.estado, "SP");
	strcpy(e2.cep, "9000-345");
	
	// Exibindo dados
	printf("\n%s %d/%d", e1.rua, e1.num, e1.complemento);
	printf("\n%s, %s/%s", e1.cep, e1.cidade, e1.estado);
	printf("\n%s %d/%d", e2.rua, e2.num, e2.complemento);
	printf("\n%s, %s/%s", e2.cep, e2.cidade, e2.estado);
}
