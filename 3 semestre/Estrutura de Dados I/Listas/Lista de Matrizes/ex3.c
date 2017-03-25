#include <stdio.h>

main()
{
    /* vars */
    int m[10][10], i, j;

    printf("TRIANGULAR SUPERIOR\n");

    /* Entrada */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Insira m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento e Saída */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (j > i) {
                printf("\t%d", m[i][j]);
            } else {
                printf("\t ");
            }
        }
            printf("\n");
    }
}
