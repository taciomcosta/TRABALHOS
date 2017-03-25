#include <stdio.h>

main()
{
    /* vars */
    int a[4][4], b[4][4], maior[4][4], i, j;

    printf("MATRIZ COM OS MAIORES ELEMENTOS ENTRE DUAS\n");
    //Entrada
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    /* Processamento e Saída */
    printf("MAIOR:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (a[i][j] >= b[i][j]) {
                maior[i][j] = a[i][j];
            } else {
                maior[i][j] = b[i][j];
            }
            printf("%d  ", maior[i][j]);
        }
        printf("\n");
    }
}
