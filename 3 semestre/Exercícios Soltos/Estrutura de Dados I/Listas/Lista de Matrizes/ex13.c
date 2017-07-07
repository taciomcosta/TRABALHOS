#include <stdio.h>

main()
{
    /* vars */
    int a[5][5], b[5][5], diferenca[5][5], i, j;

    /* Entrada */
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    /* Processamento e Saída */
    for (i = 0; i < 4; i++) {
        for (j = 0 ; j < 4; j++) {
            diferenca[i][j] = a[i][j] - b[i][j];
            printf("%d  ", diferenca[i][j]);
        }
        printf("\n");
    }
}
