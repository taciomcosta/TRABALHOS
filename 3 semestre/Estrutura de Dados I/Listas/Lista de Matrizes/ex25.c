#include <stdio.h>

main()
{
    /* vars */
    int lados[50][2], area[50], i, j;

    printf("AREA DE 50 RETANGULOS\n");

    /* Entrada */
    for (i = 0; i < 50; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o %do lado do triangulo %d: ", j+1, i);
            scanf("%d", &lados[i][j]);
        }
    }

    /* Processamento e Saída*/
    for (i = 0; i < 50; i++) {
        area[i] = lados[i][0] * lados[i][1];
        printf("Ret %d: %d x %d = %d\n", i, lados[i][0], lados[i][1], area[i]);
    }
}
