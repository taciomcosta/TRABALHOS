#include <stdio.h>

#define T 10

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

void determinarMinimax(int m[][T])
{
        int k, l;
        int linhaMaior = 0;
        int maior = m[0][0];
        int minimax, colunaMinimax;

        /* Determinando a linha do maior elemento */
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (m[k][l] > maior) {
                                linhaMaior = k;
                        }
                }
        }

        /* Determinando o minimax */
        minimax = m[linhaMaior][0];
        colunaMinimax = 0;
        for (l = 0; l < T; l++) {
                if (m[linhaMaior][l] < minimax) {
                        minimax = m[linhaMaior][l];
                        colunaMinimax = l;
                }
        }


        printf("\nMinimax: A[%i][%i] = %i\n", linhaMaior, colunaMinimax, minimax);

}

main()
{
        /* vars */
        int A[T][T];
        int i, j;

        printf("DETERMINANDO O MINIMAX DE UMA MATRIZ\n\n");

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

        determinarMinimax(A);
}
