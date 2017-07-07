#include <stdio.h>

#define T 10

void imprimirVetor(int v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%d\n", v[j]);
        }
        printf("\n");
}


void compactarVetor(int v[])
{
        int j;
        int cont = 0;
        int compactado[T];

        for (j = 0; j < T; j++) {
                if (v[j] > 0) {
                        compactado[cont] = v[j];
                        cont++;
                }
        }

        printf("\nCompactado:\n");
        imprimirVetor(compactado, cont);
}

main()
{
        /* vars */
        int A[T], i;

        printf("VETOR COMPACTADO\n\n");

        /* Entrada */
        printf("Carregando vetor de %i elementos:\n", T);
        for (i = 0; i < T; i++) {
                printf("A[%i]: ", i);
                scanf("%i", &A[i]);
        }

        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirVetor(A, T);
        compactarVetor(A);
}
