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

int menorDiagonalSecundaria(int m[][T], int tam)
{
        int i, j;
        int men = m[0][5];

        for (i = 0; i < tam; i++) {
                for (j = 0; j < T; j++) {
                        if (i+j == T-1 && m[i][j] < men) {
                                men = m[i][j];
                        }
                }
        }

        return men;
}

main()
{
        int A[T][T];
        int menor;

        printf("MENOR ELEMENTO DA DIAGONAL SECUNDARIA\n\n");

        /* Entrada */
        lerMatriz(A, T);

        /* Processamento */
        menor = menorDiagonalSecundaria(A, T);

        /* Saída */
        printf("\nM:\n");
        imprimirMatriz(A, T);
        printf("\nMenor = %i\n", menor);
}
