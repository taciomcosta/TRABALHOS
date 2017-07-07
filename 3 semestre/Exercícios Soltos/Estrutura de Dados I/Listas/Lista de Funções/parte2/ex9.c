#include <stdio.h>

#define T 15

void lerVetor(int u[])
{
        int j;

        printf("\nCarregando vetor de %i elementos...\n", T);

        for (j = 0; j < T; j++) {
                printf("v[%i]: ", j);
                scanf("%i", &u[j]);
        }
}

void imprimirVetor(int u[])
{
        int j;

        printf("\nV:\n");

        for (j = 0; j < T; j++) {
                printf("%i ", u[j]);
        }
        printf("\n");
}

int calcularPares(int u[])
{
        int i,
                cont = 0;

        for (i = 0; i < T; i++) {
                if (u[i]%2 == 0) {
                        cont++;
                }
        }


        return cont;
}

main()
{
        /* vars */
        int X[T], qtdPares;

        printf("QUANTIDADE DE PARES\n\n");

        lerVetor(X);
        imprimirVetor(X);

        qtdPares = calcularPares(X);

        printf("\npares: %i\n", qtdPares);
}
