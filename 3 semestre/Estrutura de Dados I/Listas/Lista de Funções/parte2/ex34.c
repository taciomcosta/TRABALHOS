#include <stdio.h>

#define T 9

void imprimirMatriz(float m[][T])
{
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("%.2f ", m[k][l]);
                }
                printf("\n");
        }

}

float somarLinhasPares(float m[][T])
{
        int k, l;
        float s = 0;

        /* Processamento*/
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k%2 == 0) {
                                s += m[k][l];
                        }
                }
        }

        /* Saída */
        return s;
}

main()
{
        /* vars */
        float A[T][T];
        int i, j;
        float total;

        printf("SOMA DOS ELEMENTOS DAS LINHAS PARES\n\n");

        /* Entrada */
        printf("\nCarregando matriz %ix%i:\n", T, T);
        for (i = 0; i < T; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%f", &A[i][j]);
                }
        }

        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirMatriz(A);

        total = somarLinhasPares(A);

        printf("\nSoma = %.2f\n", total);
}
