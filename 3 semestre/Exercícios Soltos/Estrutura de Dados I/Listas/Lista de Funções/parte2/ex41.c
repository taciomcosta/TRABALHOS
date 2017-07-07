#include <stdio.h>

#define T 7

void lerMatriz(int m[][T])
{
        int k, l;

        printf("\nCarregando matriz %i x %i:\n", T, T);
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("m[%i][%i]: ", k, l);
                        scanf("%i", &m[k][l]);
                }
        }
}

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

int calcularMenorSobDiagonalSecundaria(int m[][T])
{
        int menor = m[1][T-1];
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k+l > T-1 && m[k][l] < menor) {
                                menor = m[k][l];
                        }
                }
        }

        return menor;
}

main()
{
        /* vars */
        int M[T][T];
        int menor;

        printf("MENOR ELEMENTO SOB A DIAGONAL SECUNDARIA\n\n");

        /* Entrada */
        lerMatriz(M);

        /* Processamento e Saída */
        printf("\nM:\n");
        imprimirMatriz(M);
        menor = calcularMenorSobDiagonalSecundaria(M);

        printf("\nMENOR ELEMENTO = %i\n", menor);
}
