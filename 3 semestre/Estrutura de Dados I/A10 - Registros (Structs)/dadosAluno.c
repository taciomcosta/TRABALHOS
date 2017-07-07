#include <stdio.h>

struct dados_aluno {
	float media;
	int idade;
};

main()
{
	struct dados_aluno aluno;
	
	printf("REGISTRO DE ALUNO\n\n");
	
	printf("Digite a media do aluno: ");
	scanf("%f", &aluno.media);
	
	printf("Digite a idade do aluno: ");
	scanf("%i", &aluno.idade);
	
	printf("ALUNO\n\n");
	printf("Media: %.2f\n", aluno.media);
	printf("Idade: %i\n", aluno.idade);
}
