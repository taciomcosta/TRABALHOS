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

void somarElementosCadaLinha(float m[][T])
{
        int k, l;
        float v[T];

        /* Processamento*/
        for (k = 0; k < T; k++) {
                v[k] = 0;
                for (l = 0; l < T; l++) {
                        v[k] += m[k][l];
                }
        }

        printf("\nV:\n");
        for (k = 0; k < T; k++) {
                printf("%.2f\n", v[k]);
        }

}

main()
{
        /* vars */
        float A[T][T];
        int i, j;

        printf("SOMA DOS ELEMENTOS PARA CADA LINHA\n\n");

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

        somarElementosCadaLinha(A);
}
