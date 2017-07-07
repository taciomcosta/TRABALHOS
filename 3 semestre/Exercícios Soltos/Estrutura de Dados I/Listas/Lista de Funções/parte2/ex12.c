#include <stdio.h>

void lerVetor(int v[], int tam)
{
        int j;

        printf("\nCarregando vetor de %i elementos...\n", tam);
        for (j = 0; j < tam; j++) {
                printf("A[%i]: ", j);
                scanf("%i", &v[j]);
        }
}

void imprimirVetor(int v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%i\n", v[j]);
        }

}

void ordenar(int A[], int tam)
{
        int i, j, aux, ordenado = 0;

        for (i = 0; i < tam; i++) {
                for (j = 0; j < tam-1; j++) {
                        if (A[j] > A[j+1]) {
                                ordenado = 0;
                                aux = A[j];
                                A[j] = A[j+1];
                                A[j+1] = aux;
                        }
                }
        }

        printf("\nV (ordenado):\n");
        imprimirVetor(A, 50);
}

main()
{
        /* vars */
        int v[50];

        printf("ORDENACAO CRESCENTE\n\n");

        lerVetor(v, 50);
        printf("\nV:\n");
        imprimirVetor(v, 50);
        ordenar(v, 50);
}
