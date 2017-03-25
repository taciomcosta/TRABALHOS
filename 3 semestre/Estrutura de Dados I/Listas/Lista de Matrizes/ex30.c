#include <stdio.h>

main()
{
    /* vars */
    int valores[5][3], i, j, total;

    printf("RECEBIMENTO DAS MANICURES\n");

    /* Entrada */
    for (i = 0; i < 5; i++) {
        printf("\nManicure %d:\n", i+1);

        printf("Pes: ");
        scanf("%d", &valores[i][0]);

        printf("Maos: ");
        scanf("%d", &valores[i][1]);

        printf("Podologia: ");
        scanf("%d", &valores[i][2]);
    }

    /* Processamento e Saída */
    for (i = 0; i < 5; i++) {
        total = 10 * valores[i][0] + 15 * valores[i][1] + 30 * valores[i][2];
        printf("Manicure %i: R$%d,00\n", i+1, total);
    }
}
