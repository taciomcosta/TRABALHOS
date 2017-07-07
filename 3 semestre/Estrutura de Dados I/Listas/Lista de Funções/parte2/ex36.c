#include <stdio.h>

#define T 6

void imprimirMatriz(int m[][T])
{
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("%i ", m[k][l]);
                }
                printf("\n");
        }

}

void multiplicarPelaDiagonalPrincipal(int m[][T])
{
        int k, l;

        /* Processamento*/
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k != l) {
                                m[k][l] *= m[k][k];
                        }
                }
                m[k][k] *= m[k][k];
        }

        printf("\nA(multiplicada pela diagonal principal):\n");
        imprimirMatriz(m);

}

main()
{
        /* vars */
        int A[T][T];
        int i, j;

        printf("SOMA DOS ELEMENTOS PARA CADA LINHA\n\n");

        /* Entrada */
        printf("\nCarregando matriz %ix%i:\n", T, T);
        for (i = 0; i < T; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &A[i][j]);
                }
        }

        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirMatriz(A);

        multiplicarPelaDiagonalPrincipal(A);
}
