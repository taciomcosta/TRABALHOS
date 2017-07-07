#include <stdio.h>

main()
{
    /* vars */
    int m[5][5], i, j;

    printf("MATRIZ IDENTIDADE (5 x 5)\n");

    /* Entrada, Processamento e Saída */
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == j) {
                m[i][j] = 1;
            } else {
                m[i][j] = 0;
            }

            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

}
