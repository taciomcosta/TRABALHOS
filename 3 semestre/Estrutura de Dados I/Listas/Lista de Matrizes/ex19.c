#include <stdio.h>

main()
{
    /* vars */
    int m[4][4], i, j, aux;

    printf("TROCA DE VALORES\n");

    /* Entrada */
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* impressão da matriz M */
    printf("\nM:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%02d\t", m[i][j]);
        }
        printf("\n");
    }

    /* Processamento */
    for (j = 0; j < 4; j++) {
        aux = m[0][j];
        m[0][j] = m[3-j][3];
        m[3-j][3] = aux;
    }

    for (i = 1; i < 3; i++) {
        aux = m[3-i][0];
        m[3-i][0] = m[3][i];
        m[3][i] = aux;
    }

    /* Saída */
    printf("\nVALORES TROCADOS(i:1 -> j:4 e i:4 -> j:1)\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%02d\t", m[i][j]);
        }
        printf("\n");
    }
}
