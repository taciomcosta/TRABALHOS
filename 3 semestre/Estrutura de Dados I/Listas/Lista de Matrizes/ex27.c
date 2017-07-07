#include <stdio.h>

main()
{

    /* vars */
    int d[6][6], v[6], i, j,
        distanciaPercorrida = 0;

    printf("DISTANCIA ENTRE DUAS CIDADES\n");

    /* Entrada */
    for (i = 0; i < 6; i++) {
        for (j = i+1; j < 6; j++) {
            /* Se não for a mesma cidade */
                printf("Distancia (Cidade %d - Cidade %d): ", i, j);
                scanf("%d", &d[i][j]);
                d[j][i] = d[i][j];
        }
    }

    for (i = 0; i < 6; i++) {
        printf("\nRota - %d: ", i);
        scanf("%d", &v[i]);
    }

    /* Processamento */
    for (i = 0; i < 5; i++) {
        distanciaPercorrida += d[v[i]][v[i+1]];
        printf("%d ", d[v[i]][v[i+1]]);
    }

    /* Saída */
    printf("\nDISTANCIAS: \n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (i != j) {
                printf("%d\t", d[i][j]);
            } else {
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\nDISTANCIA PERCORRIDA: %d\n", distanciaPercorrida);

}
