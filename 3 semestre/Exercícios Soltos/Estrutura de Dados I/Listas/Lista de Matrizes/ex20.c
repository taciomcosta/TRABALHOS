#include <stdio.h>

main()
{
    /* vars */
    int m[8][8], i, j;

    printf("MATRIZ TRIANGULAR INFERIOR\n");

    /* Entrada */
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Impressão da matriz M e Processamento*/
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d\t", m[i][j]);
            if (i <= j) {
                m[i][j] = 0;
            }
        }
        printf("\n");
    }

    /* Saída */
    printf("\n\nMATRIZ TRIANGULAR INFERIOR\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

}
