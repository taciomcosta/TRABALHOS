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
                printf("%i ", v[j]);
        }
}

void calcularSomatorio(int A[], int B[], int tam)
{
        int j, k, somatorio;

        for (j = 0; j < tam; j++) {
                somatorio = 0;
                for (k = 1; k <= A[j]; k++) {
                        somatorio += k;
                }
                B[j] = somatorio;
        }
}

main()
{
        int a[15], b[15];

        printf("VETOR SOMATORIO\n\n");

        /* eEntrada */
        lerVetor(a, 15);
        /* Processamento */
        printf("\nA:\n");
        imprimirVetor(a, 15);
        calcularSomatorio(a, b, 15);
        printf("\n\nB:\n");
        /* Saída */
        imprimirVetor(b, 15);
}
