#include <stdio.h>

main()
{
    /* vars */
    int m[10][10], i, j, maiorValor, linhaMaiorValor, colunaMaiorValor;

    printf("MAIOR VALOR DE UMA MATRIZ 10X10\n");

    /* Entrada */
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("Digite m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    /* Processamento */
    maiorValor = m[0][0];
    linhaMaiorValor = 0;
    colunaMaiorValor = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (m[i][j] > maiorValor) {
                maiorValor = m[i][j];
                linhaMaiorValor = i;
                colunaMaiorValor = j;
            }
        }
    }

    /* Saída */
    printf("\nMAIOR VALOR: m[%d][%d] (%d)", linhaMaiorValor, colunaMaiorValor, m[linhaMaiorValor][colunaMaiorValor]);

}
