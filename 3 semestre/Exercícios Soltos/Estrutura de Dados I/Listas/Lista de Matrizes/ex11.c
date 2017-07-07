#include <stdio.h>

main()
{
    /* vars */
    int m[3][4], res[3][4], i, j;

    printf("TRIPLO DE UMA MATRIZ 3X4\n");

    /* Entrada */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento e Saída */
    printf("\n3M:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            res[i][j] = 3 * m[i][j];
            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }
}
