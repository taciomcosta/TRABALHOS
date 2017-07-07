#include <stdio.h>

#define QTD_ALUNOS 10

struct dados_aluno {
        float media;
        int idade;
};

int main(void)
{
        struct dados_aluno alunos[QTD_ALUNOS];

        printf("REGISTRO DE 10 ALUNOS\n\n");

        for (int i = 0; i < QTD_ALUNOS; i++) {
                printf("\nInsira a media do %io. aluno: ", i + 1);
                scanf("%f", &alunos[i].media);

                printf("Insira a idade do %io. aluno: ", i + 1);
                scanf("%i", &alunos[i].idade);
        }

        for (int i = 0; i < QTD_ALUNOS; i++) {
                printf("\nALUNO %i\n", i + 1);
                printf("%.2f\n", alunos[i].media);
                printf("%i\n", alunos[i].idade);
        }

        return 0;
}
