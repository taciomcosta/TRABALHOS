#include <stdio.h>
#include <string.h>

struct aluno {
	char nome[40];
	float P1;
	float P2;
	float T;
	int faltas;
};

main()
{
	struct aluno joao, maria;
	strcpy(joao.nome, "Joao");
	joao.P1 = 9.5;
	joao.P2 = 8.5;
	joao.T = 4;
	joao.faltas = 3;
	maria = joao;
}
