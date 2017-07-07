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

float calcularProdutoSobreDiagonalPrincipalESecundaria(float m[][T])
{
        float p = 1;
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k < l && k+l < T-1) {
                                p *= m[k][l];
                        }
                }
        }

        return p;
}

main()
{
        /* vars */
        float M[T][T];
        float produto;

        printf("PRODUTO DOS ELEMENTOS SOBRE AS DUAS DIAGONAIS\n\n");

        /* Entrada */
        lerMatriz(M);

        /* Processamento e Saída */
        printf("\nM:\n");
        imprimirMatriz(M);
        produto = calcularProdutoSobreDiagonalPrincipalESecundaria(M);

        printf("\nPRODUTO = %.2f\n", produto);
}
