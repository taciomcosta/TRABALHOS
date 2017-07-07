#include <stdio.h>

void calcularPromocao(int v[])
{
        int j;
        int locacoesGratuitas[500];

        for (j = 0; j < 500; j++) {
                locacoesGratuitas[j] = v[j] / 1500;
        }

        /* Saída */
        printf("\nLocacoes Gratuitas:\n");
        for (j = 0; j < 500; j++) {
                printf("Cliente %i: %i\n", j+1, locacoesGratuitas[j]);
        }
}

main()
{
        /* vars */
        int filmesRetirados[500], i;

        printf("PROMOCAO DE FILMES RETIRADOS\n\n");

        /* Entrada */
        for (i = 0; i < 500; i++) {
                printf("Cliente %i: ", i+1);
                scanf("%i", &filmesRetirados[i]);
        }

        /* Processamento e Saída */
        calcularPromocao(filmesRetirados);
}
