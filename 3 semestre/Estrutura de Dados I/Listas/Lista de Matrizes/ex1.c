#include <stdio.h>

main()
{
    /* vars */
    int m[10][10], i, j;

    printf("DIAGONAL PRINCIPAL DE UMA MATRIZ\n");

    //Entrada
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    //Processamento e Saída
    printf("\nDIAGONAL PRINCIPAL:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i == j) {
                printf("%d ", m[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
