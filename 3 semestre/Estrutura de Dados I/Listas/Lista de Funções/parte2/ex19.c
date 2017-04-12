#include <stdio.h>

#define T 20

void lerVetor(int v[])
{
        int i;

        printf("\nCarregando vetor de %i elementos:\n", T);
        for (i = 0; i < T; i++) {
                printf("V[%i]: ", i);
                scanf("%i", &v[i]);
        }
}

void imprimirVetor(int v[])
{
        int i;

        for (i = 0; i < T; i++) {
                printf("%i\n", v[i]);
        }
        printf("\n");
}

void multiplicar(int v[], int u[])
{
        int i, produto[T];

        for (i = 0; i < T; i++) {
                produto[i] = v[i] * u[i];
        }

        printf("\nPRODUTO:\n");
        imprimirVetor(produto);
}

main()
{
        /* vars */
        int A[T], B[T];

        /* Entrada */
        lerVetor(A);
        lerVetor(B);
        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirVetor(A);
        printf("\nB:\n");
        imprimirVetor(B);
        multiplicar(A, B);
}
