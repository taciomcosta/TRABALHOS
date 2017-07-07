#include <stdio.h>

#define T 6

void lerMatriz(int m[][T], int tam)
{
        int i, j;

        printf("\nCarregando matriz %ix%i:\n", tam, T);
        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &m[i][j]);
                }
        }
}

void imprimirMatriz(int m[][T], int tam)
{
        int i, j;

        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        printf("%i ", m[i][j]);
                }
                printf("\n");
        }
}

int somar(int m[][T], int tam)
{
        int i, j;
        int s = 0;

        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        if (i == 5 || j == 3) {
                                s += m[i][j];
                        }
                }
        }

        return s;
}

main()
{
        /* vars */
        int k, l, soma;
        int A[7][T];

        printf("SOMA DOS ELEMENTOS DA LINHA 5 E COLUNA 3\n\n");

        /* Entrada */
        lerMatriz(A, 7);

        /* Processamento*/
        soma = somar(A, 7);

        /* Saída */
        printf("\nA:\n");
        imprimirMatriz(A, 7);
        printf("\nSOMA = %i\n", soma);
}
