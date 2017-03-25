#include <stdio.h>

main()
{
    /* vars */
    int m[8][8], i, j, maiorDP,
        somaDS = 0;

    printf("MAIOR ELEMENTO DA DIAGONAL PRINCIPAL E SOMA DOS ELEMENTOS DA DIAGONAL SECUNDARIA\n");

    /* Entrada */
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento  e Impressão da matriz*/
    maiorDP = m[0][0];
    printf("M\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i+j == 8-1) {
                somaDS += m[i][j];
            } else if (i == j && m[i][j] > maiorDP) {
                maiorDP = m[i][j];
            }
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior elemento da diagonal principal: %d\n", maiorDP);
    printf("\nSoma dos elementos da diagonal secundaria: %d\n", somaDS);

}
