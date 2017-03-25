#include <stdio.h>

main()
{
    /* vars */
    int m[10][10], n[10][10], i, j, aux;

    printf("TROCA DAS TRIANGULARES ENTRE DUAS MATRIZES\n");

    /* Entrada */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite n[%d][%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }


    /* Impressão da matriz M */
    printf("M\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

    /* Impressão da matriz N */
    printf("N\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d  ", n[i][j]);
        }
        printf("\n");
    }


    /* Processamento */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i > j) {
                aux = m[i][j];
                m[i][j] = n[j][i];
                n[j][i] = aux;
            }
        }
    }


    printf("M\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

    /* Impressão da matriz N */
    printf("N\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d  ", n[i][j]);
        }
        printf("\n");
    }
}
