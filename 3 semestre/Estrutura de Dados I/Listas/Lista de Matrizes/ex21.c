#include <stdio.h>

main()
{
    /* vars */
    int m[5][5], i, j, aux;

    printf("TROCA DAS TRIANGULARES\n");

    /* Entrada */
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento e Saída */
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i < j) {
                aux = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = aux ;
            }
            printf("%02d\t", m[i][j]);
        }
        printf("\n");
    }
}
