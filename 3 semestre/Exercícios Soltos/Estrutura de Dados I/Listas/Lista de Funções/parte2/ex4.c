#include <stdio.h>

#define QTD_HABITANTES 3

struct dados {
        int idade;
        int numFilhos;
        char sexo;
        float salario;
};

void lerDados(struct dados d[])
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

void calcularDados(struct dados d[])
{
        /* vars */
        float mediaSalarial = 0;
        int i,
                menorIdade = d[0].idade,
                maiorIdade = d[0].idade,
                contMulheres = 0;

        for (i = 0; i < QTD_HABITANTES; i++) {
                mediaSalarial += d[i].salario;

                if (d[i].idade < menorIdade) {
                        menorIdade = d[i].idade;
                }

                if (d[i].idade > maiorIdade) {
                        maiorIdade = d[i].idade;
                }

                if (d[i].sexo = 'F' && d[i].numFilhos == 3 && d[i].salario < 500) {
                        contMulheres++;
                }


        }

        mediaSalarial /= QTD_HABITANTES;

        printf("\nMedia salarial: R$ %.2f\n", mediaSalarial);
        printf("Maior idade: %i\n", maiorIdade);
        printf("Menor idade: %i\n", menorIdade);
        printf("Mulheres com 3 filhos que ganham ate R$500,00: %i\n", contMulheres);

}

main()
{
        /* vars */
        struct dados DADOS[QTD_HABITANTES];
        int j;

        printf("DADOS DE UMA POPULACAO\n\n");

        /* Entrada */
        lerDados(DADOS);

        calcularDados(DADOS);

}
