#include <stdio.h>

main()
{
    /* vars */
    int m[3][3], res[3][3], i, j;

    printf("MATRIZ INVERTIDA\n");

    /* Entrada */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento e Saída */
    printf("M\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("RES\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[i][j] = m[2-j][i];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
