#include <stdio.h>

main()
{
    /* vars */
    int m[20][20], i, j, X;

    printf("BUSCA DE VALOR\n");

    /* Entrada */
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            printf("Digie m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nDigite o valor a ser procurado: ");
    scanf("%d", &X);

    /* Processamento e Saída */
    for (i = 0; i < 20; i++) {
        for (j = 0; j < 20; j++) {
            if (m[i][j] == X) {
                printf("\nValor encontrado em m[%d][%d]\n", i, j);
            } else if (i == 19 && j == 19) {
                printf("\nNenhum valor encontrado\n");
            }
        }
    }
}
