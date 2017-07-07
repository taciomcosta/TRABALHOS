#include <stdio.h>

int main()
{
    /* vars */
    int m[6][6], i, j;

    printf("ZERANDO ELEMENTOS NEGATIVOS FORA DAS DIAGONAIS DA MATRIZ\n");

    /* Entrada */
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento e Saída */
    printf("M\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("M\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (i != j && i+j != 6-1 && m[i][j] < 0) {
                m[i][j] = 0;
            }
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

}
