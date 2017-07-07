/*
	17      16      15      14      13
	18      5       4       3       12
	19      6       1       2       11
	20      7       8       9       10
	21      22      23      24      25

*/

#include <stdio.h>

main()
{
    /* vars */
    int tamanho, i, j, meio, I, L,
        n = 1;

    printf("MATRIZ CARACOL");

    /* ENTRADA */
    printf("\nDigite o tamanho da matriz: ");
    scanf("%d", &tamanho);

    while (tamanho%2 != 1) {
        printf("\nDigite o tamanho da matriz: ");
        scanf("%d", &tamanho);
    }

    /* PROCESSAMENTO */
    int m[tamanho][tamanho];
    meio = tamanho / 2;
    i = meio;
    j = meio;
    I = meio-1;
    L = meio+1;

    while (L < tamanho) {
        /* DIREITA */
        while (j < L) {
            m[i][j] = n;
            n++;
            j++;
        }

        /* CIMA */
        while (i > I) {
            m[i][j] = n;
            n++;
            i--;
        }

        /* ESQUERDA */
        while (j > I) {
            m[i][j] = n;
            n++;
            j--;
        }

        /* BAIXO */
        while (i < L) {
            m[i][j] = n;
            n++;
            i++;
        }

        /* DIREITA */
        while (j <= L) {
            m[i][j] = n;
            n++;
            j++;
        }

        I--;
        L++;
    }
    printf("\n\n");

    /* SAÍDA */
    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }


}
