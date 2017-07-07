#include <stdio.h>

main()
{
    /* vars */
    int respostas[100][10], gabarito[10], resultado[100], i, j;

    printf("RESULTADO DO EXAME\n");

    /* Entrada */
    for (i = 0; i < 100; i++) {
        printf("\nAluno %d:\n", i+1);
        for (j = 0; j < 10; j++) {
            printf("Resposta %d: ", j+1);
            scanf("%d", &respostas[i][j]);
            respostas[i][j] = 1;
        }
    }

    printf("\nGABARITO\n");
    for (i = 0; i < 10; i++) {
        printf("Reposta %d: ", i);
        scanf("%d", &gabarito[i]);
        gabarito[i] = 1;
    }

    /* Processamento */
    printf("\nPONTUACOES\n");
    for (i = 0; i < 100; i++) {
        resultado[i] = 0;
        for (j = 0; j < 10; j++) {
            if (respostas[i][j] == gabarito[j]) {
                resultado[i]++;
            }
        }
        printf("\nAluno %d: %d pontos", i, resultado[i]);
    }

}
