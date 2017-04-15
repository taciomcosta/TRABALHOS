#include <stdio.h>

#define T 6

void subtrair(int linhas, int colunas, int a[][colunas], int b[][colunas])
{
        int k, l;
        int C[linhas][linhas];


        /* Processamento */
        for (k = 0; k < linhas; k++) {
                for (l = 0; l < colunas; l++) {
                        C[k][l] = a[k][l] - b[k][l];
                }
        }


        /* Saída */
        printf("\nC (%i x %i):\n", linhas, colunas);
        for (k = 0; k < linhas; k++) {
                for (l = 0; l < colunas; l++) {
                        printf("%i ", C[k][l]);
                }
                printf("\n");
        }
}

main()
{
        /* vars */
        int A[4][T], B[4][T];
        int i, j;

        printf("SUBTRACAO DE MATRIZES\n\n");

        /* Entraada */
        printf("\nCarregando matriz %ix%i:\n", 4, T);
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &A[i][j]);
                }
        }

        printf("\nCarregando matriz %ix%i:\n", 4, T);
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &B[i][j]);
                }
        }


        /* Processamento e Saída */
        printf("\nA:\n");
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("%i ", B[i][j]);
                }
                printf("\n");
        }

        printf("\nB:\n");
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("%i ", B[i][j]);
                }
                printf("\n");
        }

        subtrair(4, T, A, B);
}
