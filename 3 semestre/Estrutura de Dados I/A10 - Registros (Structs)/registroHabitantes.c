#include <stdio.h>

#define QTD_HABITANTES 5

struct habitante {
        int idade;
        char sexo;
        float salario;
        int qtdFilhos;
};

int main(void)
{
        printf("REGISTRO DE HABITANTES E MEDIA SALARIAL\n\n");

        /* vars */
        float mediaSalarial = 0;
        struct habitante habitantes[QTD_HABITANTES];

        /* Entrada */
        for (int i = 0; i < QTD_HABITANTES; i++) {
                printf("\nHabitante %i\n", i + 1);
                printf("Idade: ");
                scanf("%i", &habitantes[i].idade);

                printf("Sexo: ");
                __fpurge(stdin);
                scanf("%c", &habitantes[i].sexo);

                printf("Salario: ");
                scanf("%f", &habitantes[i].salario);

                printf("Filhos: ");
                scanf("%i", &habitantes[i].qtdFilhos);

                mediaSalarial += habitantes[i].salario;
        }

        mediaSalarial /= QTD_HABITANTES;

        /* Saída */
        printf("\nDADOS\n");
        for (int i = 0; i < QTD_HABITANTES; i++) {
                printf("\n----------\n");
                printf("Idade: %i\n", habitantes[i].idade);
                printf("Sexo: %c\n", habitantes[i].sexo);
                printf("Salario: R$ %.2f\n", habitantes[i].salario);
                printf("Filhos: %i\n", habitantes[i].qtdFilhos);
        }

        printf("\nMEDIA SALARIAL: R$%.2f\n", mediaSalarial);
}
