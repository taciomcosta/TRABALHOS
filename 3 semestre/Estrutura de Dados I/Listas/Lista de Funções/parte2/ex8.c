#include <stdio.h>

#define T 10

void imprimirVetor(int v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%d ", v[j]);
        }
        printf("\n");
}

void parImpar(int v[])
{
        int j, A[T], B[T],
                contPar = 0,
                contImpar = 0;

        for (j = 0; j < T; j++) {
                if (v[j]%2 == 0) {
                        A[contPar] = v[j];
                        contPar++;
                } else {
                        B[contImpar] = v[j];
                        contImpar++;
                }
        }


        printf("\nA:\n");
        imprimirVetor(A, contPar);
        printf("\nB:\n");
        imprimirVetor(B, contImpar);
}


main()
{
        int i, X[T];

        printf("VETOR DE PARES E IMPARES\n\n");

        for (i = 0; i < T; i++) {
                printf("X[%i]: ", i);
                scanf("%i", &X[i]);
        }

        printf("\nX:\n");
        imprimirVetor(X, T);

        parImpar(X);

}
