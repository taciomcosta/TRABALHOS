#include <stdio.h>

#define T 20

void lerVetor(int v[])
{
        int i;

        printf("\nCarregando vetor de %i elementos:\n" ,T);

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

void somar(int v[], int u[])
{
        int i, soma[T];

        for (i = 0; i < T; ++i) {
                soma[i] = v[i] + u[i];
        }

        printf("\nSOMA:\n");
        imprimirVetor(soma);
}

main()
{
        /* vars */
        int A[T], B[T];

        printf("SOMA DE DOIS VETORES\n\n");

        /* Entrada */
        lerVetor(A);
        lerVetor(B);
        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirVetor(A);
        printf("\nB:\n");
        imprimirVetor(B);
        somar(A, B);
}
