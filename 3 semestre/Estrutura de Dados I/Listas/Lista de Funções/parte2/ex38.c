#include <stdio.h>

#define T 10

void imprimirMatriz(int m[][T], int tam)
{
        int k, l;

        for (k = 0; k < tam; k++) {
                for (l = 0; l < T; l++) {
                        printf("%4i", m[k][l]);
                }
                printf("\n");
        }

}

void somarColunas(int m[][T])
{
        int k, l;

        for (l = 0; l < T; l++) {
                m[60][l] = 0;
                for (k = 0; k < 60; k++) {
                        m[60][l] += m[k][l];
                }
        }

        printf("\nSOMA\n");
        imprimirMatriz(m, 61);
}

main()
{
        /* vars */
        int M[61][T];
        int i, j;

        printf("SOMA DOS ELEMENTOS DE CADA COLUNA NA ULTIMA LINHA\n\n");

        /* Entrada */
        printf("\nCarregando matriz de %i x %i:\n", 60, T);
        for (i = 0; i < 60; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &M[i][j]);
                }
        }

        /* Processamento e Saída */
        somarColunas(M);

}
