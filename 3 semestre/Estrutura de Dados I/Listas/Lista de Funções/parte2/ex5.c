#include <stdio.h>

#define TAMANHO 5

void numPerfeito(long A[])
{
        long j, somaDiv, num,
                i = 0;

        for (num = 2; i < TAMANHO; num++) {
                somaDiv = 0;
                for (j = 1; j < num; j++) {
                        if (num%j == 0) {
                               somaDiv += j;
                        }
                }

                if (somaDiv == j) {
                        A[i] = num;
                        i++;
                }
        }
}

main()
{
        /* vars */
        long v[TAMANHO], i;

        printf("VETOR DE %i NUMEROS PERFEITOS\n\n", TAMANHO);

        printf("Carregando...\n");

        numPerfeito(v);

        printf("\nV:\n");
        for (i = 0; i < TAMANHO; i++) {
                printf("%ld ", v[i]);
        }
        printf("\n");
}
