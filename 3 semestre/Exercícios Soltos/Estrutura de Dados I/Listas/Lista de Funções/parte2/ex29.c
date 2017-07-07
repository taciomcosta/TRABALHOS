#include <stdio.h>

#define T 6

void multiplicar(int linhas, int colunas, int a[][colunas], int b[][linhas])
{
        int linhaA, linhaB, colunaA, colunaB;
        int C[linhas][linhas];


        /* Processamento */
        for (linhaA = 0; linhaA < linhas; linhaA++) {
                for (colunaB = 0; colunaB < linhas; colunaB++) {
                        colunaA = 0;
                        C[linhaA][colunaB] = 0;
                        for (linhaB = 0; linhaB < colunas; linhaB++) {
                                colunaA++;
                                C[linhaA][colunaB] += a[linhaA][colunaA] * b[linhaB][colunaB];
                        }
                }
        }

        /* Saída */
        printf("\nC (%i x %i):\n", linhas, linhas);
        for (linhaA = 0; linhaA < linhas; linhaA++) {
                for (colunaA = 0; colunaA < linhas; colunaA++) {
                        printf("%i ", C[linhaA][colunaA]);
                }
                printf("\n");
        }
}

main()
{
        /* vars */
        int A[4][T], B[T][4];
        int i, j;

        printf("MULTIPLICACAO DE MATRIZES\n\n");

        /* Entraada */
        printf("\nCarregando matriz %ix%i:\n", 4, T);
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &A[i][j]);
                }
        }

        printf("\nCarregando matriz %ix%i:\n", T, 4);
        for (i = 0; i < T; i++) {
                for (j = 0; j < 4; j++) {
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
        for (i = 0; i < T; i++) {
                for (j = 0; j < 4; j++) {
                        printf("%i ", B[i][j]);
                }
                printf("\n");
        }

        multiplicar(4, T, A, B);
}
