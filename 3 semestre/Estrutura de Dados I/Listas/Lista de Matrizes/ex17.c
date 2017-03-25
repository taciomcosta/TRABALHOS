#include <stdio.h>

main()
{
    /* vars */
    int m[6][6], i, j,
        cont = 0;

    /* Entrada */
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento */
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (m[i][j] > 10) {
                cont++;
            }
        }
    }

    /* Saída */
    printf("\nVALORES MAIORES DO QUE 10: %d\n", cont);
}
