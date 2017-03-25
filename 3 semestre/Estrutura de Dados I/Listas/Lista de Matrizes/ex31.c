#include <stdio.h>

main()
{
    /* vars */
    float vendas[12][4], vendasMes,
        vendasAno = 0;
    int i, j;

    printf("VENDAS DO ANO\n");

    /* Entrada */
    for (i = 0; i < 12; i++) {
        printf("\nMes %d\n", i+1);
        for (j = 0; j < 4; j++) {
            printf("Semana %d: R$", j+1);
            scanf("%f", &vendas[i][j]);
        }
    }

    /* Processamento e Saída */
    for (i = 0; i < 12; i++) {
        printf("\nMes %d: ", i+1);
        vendasMes = 0;
        for (j = 0; j < 4; j++) {
            printf("R$%.2f ", vendas[i][j]);
            vendasMes += vendas[i][j];
        }
        printf("(Total: R$%.2f)", vendasMes);
        vendasAno += vendasMes;
    }

    printf("\nTOTAL DO ANO: R$%.2f\n", vendasAno);
}
