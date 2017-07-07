#include <stdio.h>

int main()
{

    /* VARS */
    int linhaA, linhaB, colunaA, colunaB, i, j, k, l;
    int soma;

    /* ENTRADAS 1*/
    printf("Numero de linhas de A: ");
    scanf("%d", &linhaA);

    printf("Numero de linhas de B: ");
    scanf("%d", &linhaB);

    printf("Numero de colunas de A: ");
    scanf("%d", &colunaA);

    printf("Numero de colunas de B: ");
    scanf("%d", &colunaB);

    /* PROCESSAMENTO */
    if (colunaA != linhaB) {
        printf("Nao existe a multiplicacao dessas matrizes");
    } else {
        int a[linhaA][colunaA];
        int b[linhaB][colunaB];
        int res[linhaA][colunaB];

        /* ENTRADAS 2 */
        for (i = 0; i < linhaA; i++) {
            for (j = 0; j < linhaB; j++) {
                printf("Digite A[%d][%d]: ",i ,j);
                scanf("%d", &a[i][j]);
            }
        }

        for (i = 0; i < linhaA; i++) {
            for (j = 0; j < linhaB; j++) {
                printf("Digite B[%d][%d]: ",i ,j);
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < linhaA; i++) {
            for (l = 0; l < colunaB; l++) {
                soma = 0;
                for (j = 0, k = 0; j < colunaA; j++, k++) {
                    soma += a[i][j]*b[k][l];
                }
                res[i][l] = soma;
            }
        }

        /* SAÍDA */
        printf("\n\nRES:\n");
        for (i = 0; i < linhaA; i++) {
            for (j = 0; j < colunaB; j++) {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }

    }

    return 0;
}
