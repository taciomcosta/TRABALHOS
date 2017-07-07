#include <stdio.h>

#define QTD_HABITANTES 3

struct dados {
        int idade;
        int numFilhos;
        char sexo;
        float salario;
};

void lerDados(struct dados *d)
{
        int i;

        for (i = 0; i < QTD_HABITANTES; i++) {
                printf("\nHabitante %i:\n", i+1);
                printf("Idade: ");
                scanf("%i", &d[i].idade);
                printf("Numero de filhos: ");
                scanf("%i", &d[i].numFilhos);
                printf("Sexo (M/F): ");
                scanf(" %c", &d[i].sexo);
                printf("Salario: R$ ");
                scanf("%f", &d[i].salario);
        }
}

main()
{
        /* vars */
        struct dados DADOS[QTD_HABITANTES];
        int j;

        printf("DADOS DE UMA POPULACAO\n\n");

        /* Entrada */
        lerDados(DADOS);

        /* Saída */
        printf("\n\nDADOS\n");
        for (j = 0; j < QTD_HABITANTES; j++) {
                printf("\n\nHabitante %i:\n", j+1);
                printf("Idade: %i\n", DADOS[j].idade);
                printf("Numero de filhos: %i\n", DADOS[j].numFilhos);
                printf("Sexo (M/F): %i\n", DADOS[j].sexo);
                printf("Salario: R$ %f", DADOS[j].salario);
        }
}
