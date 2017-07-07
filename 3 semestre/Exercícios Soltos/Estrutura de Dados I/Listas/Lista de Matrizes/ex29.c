#include <stdio.h>

main()
{
    /* vars */
    int A[3][5], SL[3], i, j;

    printf("SOMA DOS ELEMENTOS DE CADA LINHA DA MATRIZ\n");

    /* Entrada */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    /* Processamento */
    for (i = 0; i < 3; i++) {
        SL[i] = 0;
        for (j = 0; j < 5; j++) {
            SL[i] += A[i][j];
        }
    }

    /* Saída */
    printf("\nA\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nSL\n");
    for (i = 0; i < 3; i++) {
        printf("%d\t", SL[i]);
    }
    printf("\n");
}
