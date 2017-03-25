#include <stdio.h>

main()
{
    /* vars */
    int m[20][20], n[20][20], i, j, k, l;

    printf("OCORRENCIA DE VALORES ENTRE DUAS MATRIZES\n");

    /* Entrada */
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            printf("Digite n[%d][%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }

    /* Processamento e Saída */

    /* impressao das matrizes */
    printf("\nM\n");
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nN\n");
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            printf("%d  ", n[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            for (k = 0; k < 20; k++) {
                for (l = 0; l < 20; l++) {
                    if (m[i][j] == n[k][l]) {
                        printf("\nm[%d][%d] => n[%d][%d] (%d)\n", i, j, k, l, m[i][j]);
                    }
                }
            }
        }
    }
}
