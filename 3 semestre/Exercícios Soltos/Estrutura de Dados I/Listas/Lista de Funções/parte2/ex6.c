#include <stdio.h>

#define T 10

void fat(int A[], int B[])
{
        /* vars */
        int j, k, fat;

        for (j = 0; j < T; j++) {
                fat = 1;
                for (k = 1; k <= A[j]; k++) {
                        fat *= k;
                }
                B[j] = fat;
        }
}

main()
{
        /* vars */
        int a[T], b[T], i;

        printf("FATORIAL DE UM VETOR\n\n");

        /* Entrada */
        printf("Carregando um vetor de %i elementos...\n", T);
        for (i = 0; i < T; i++) {
                printf("Digite a[%d]: ", i);
                scanf("%i", &a[i]);
        }

        /* Processamento */
        fat(a, b);

        /* Saída */
        printf("\na:\n");
        for (i = 0; i < T; i++) {
                printf("%i ", a[i]);
        }

        printf("\n\nb:\n");
        for (i = 0; i < T; i++) {
                printf("%i ", b[i]);
        }
        printf("\n");
}
