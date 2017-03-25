#include <stdio.h>

main()
{
    /* vars */
    int A[4][4], B[4][4], SOMA[4][4],  i, j;

    printf("SOMA DE DUAS MATRIZES A+B\n");

    /* Entradas */
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    /* Processamento e Saída */
    printf("\nA + B:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            SOMA[i][j] = A[i][j] + B[i][j];
            printf("%d  ", SOMA[i][j]);
        }
        printf("\n");
    }

}
