#include <stdio.h>

#define T 3

void lerVetor(int v[])
{
        int i;

        printf("\nCarregando vetor de %i elementos:\n", T);
        for (i = 0; i < T; i++) {
                printf("v[%i]: ", i);
                scanf("%i", &v[i]);
        }
}

void imprimirVetor(int v[], int tam)
{
        int i;

        for (i = 0; i < tam; i++) {
                printf("%i\n", v[i]);
        }
}

void ordenarCrescente(int v[], int u[])
{
        int i, j, aux, C[T*2];

        /* Entrada */
        for (i = 0; i < T; i++) {
                C[i] = v[i];
                C[i+T] = u[i];
        }

        /* Processamento */
        for (i = 0; i < T*2; i++) {
                for (j = 0; j < T*2-1; j++) {
                        if (C[j] > C[j+1]) {
                                aux = C[j];
                                C[j] = C[j+1];
                                C[j+1] = aux;
                        }
                }
        }

        /* Saída */
        printf("\nC:\n");
        imprimirVetor(C, T*2);
}

main()
{
        /* vars */
        int A[T], B[T];

        printf("2 VETORES EM ORDEM CRESCENTE\n\n");

        /* Entrada */
        lerVetor(A);
        lerVetor(B);

        /* Processamento e Saída*/
        printf("\nA:\n");
        imprimirVetor(A, T);

        printf("\nB:\n");
        imprimirVetor(B, T);

        ordenarCrescente(A, B);
}
