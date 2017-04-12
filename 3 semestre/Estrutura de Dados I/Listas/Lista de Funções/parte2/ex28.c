#include <stdio.h>

#define T 6

void lerMatriz(float m[][T], int tam)
{
        int i, j;

        printf("\nCarregando matriz %ix%i:\n", tam, T);
        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%f", &m[i][j]);
                }
        }
}

void imprimirMatriz(float m[][T], int tam)
{
        int i, j;

        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        printf("%.2f ", m[i][j]);
                }
                printf("\n");
        }
}

void dividirPeloMaiorDaPrincipal(float m[][T], int tam)
{
        int i, j;
        int maior = m[0][0];

        /* encontrando o maior */
        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        if (i == j && m[i][j] > maior) {
                                maior = m[i][j];
                        }
                }
        }

        /* dividindo pelo maior */
        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        m[i][j] /= maior;
                }
        }

        printf("\nM (dividido por %i):\n", maior);
        imprimirMatriz(m, T);
}

main()
{
        /* vars */
        float A[T][T];

        printf("MENOR ELEMENTO DA DIAGONAL SECUNDARIA\n\n");

        /* Entrada */
        lerMatriz(A, T);

        /* Processamento e Saída*/
        printf("\nM:\n");
        imprimirMatriz(A, T);
        dividirPeloMaiorDaPrincipal(A, T);

}
