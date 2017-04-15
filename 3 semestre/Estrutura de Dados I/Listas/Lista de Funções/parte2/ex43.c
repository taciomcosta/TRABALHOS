#include <stdio.h>

#define T 12

void lerMatriz(float m[][T])
{
        int k, l;

        printf("\nCarregando matriz %i x %i:\n", T, T);
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("m[%i][%i]: ", k, l);
                        scanf("%f", &m[k][l]);
                }
        }
}

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

float calcularMediaSobDiagonalPrincipalESecundaria(float m[][T])
{
        float med;
        float cont = 0;
        float total = 0;
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k > l && k+l > T-1) {
                                total += m[k][l];
                                cont++;
                        }
                }
        }

        med = total / cont;

        return med;
}

main()
{
        /* vars */
        float M[T][T];
        float media;

        printf("MEDIA DOS ELEMENTOS SOB AS DUAS DIAGONAIS\n\n");

        /* Entrada */
        lerMatriz(M);

        /* Processamento e Saída */
        printf("\nM:\n");
        imprimirMatriz(M);
        media = calcularMediaSobDiagonalPrincipalESecundaria(M);

        printf("\nMEDIA = %.2f\n", media);
}
