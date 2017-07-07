#include <stdio.h>

#define T 10

void imprimirMatriz(int m[][T])
{
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("%02i ", m[k][l]);
                }
                printf("\n");
        }

}

void trocar(int m[][T])
{
        int k, l, n;
        int aux;

        /* Processamento e Saída*/
        /* linhas 2 <-> 8 */
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k == 1) {
                                aux = m[1][l];
                                m[1][l] = m[7][l];
                                m[7][l] = aux;
                        }
                }
        }
        printf("\nTroca das linhas 2 e 8\n");
        imprimirMatriz(m);

        /* colunas 4 <-> 10 */
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (l == 3) {
                                aux = m[k][3];
                                m[k][3] = m[k][9];
                                m[k][9] = aux;
                        }
                }
        }
        printf("\nTroca das colunas 4 e 10\n");
        imprimirMatriz(m);

        /* diagonais */
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k + l == T-1) {
                                aux = m[k][l];
                                m[k][l] = m[k][k];
                                m[k][k] = aux;
                        }
                }
        }
        printf("\nTroca das diagonais\n");
        imprimirMatriz(m);

        /* linha 5 <-> coluna 10 */
        l = 0;
        for (k = 0; k < T-1; k++) {
                if (l == 4) {
                        l++;
                }
                aux = m[4][k];
                m[4][k] = m[l][9];
                m[l][9] = aux;
                l++;
        }
        printf("\nTroca da linha 5 e coluna 10\n");
        imprimirMatriz(m);
}

main()
{
        /* vars */
        int A[T][T];
        int i, j;

        printf("TROCA DE LINHAS, COLUNAS E DIAGONAIS DE UMA MATRIZ\n\n");

        /* Entraada */
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

        trocar(A);
}
