#include <stdio.h>

#define T 10

void lerVetor(int v[])
{
        int i;

        printf("\n\nCarregando vetor de %i elemtnos:\n", T);
        for (i = 0; i < T; i++) {
                printf("v[%i]: ", i);
                scanf("%i", &v[i]);
        }
}

void imprimirVetor(int v[])
{
        int i;

        for (i = 0; i < T; i++) {
                printf("%i ", v[i]);
        }
        printf("\n");
}

void diferenciar(int v[], int u[])
{
        int i, diferenca[T];
        int teste[2];

        for (i = 0; i < T; i++) {
                diferenca[i] = v[i] - u[i];
        }

        printf("\nDIFERENCA:\n");
        imprimirVetor(diferenca);
}

main()
{
        /* vars */
        int A[T], B[T];

        printf("VETOR DIFERENCA\n\n");

        /* Entrada */
        lerVetor(A);
        lerVetor(B);

        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirVetor(A);
        printf("\nB:\n");
        imprimirVetor(B);
        diferenciar(A, B);
}
