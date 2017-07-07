#include <stdio.h>

float somar(float u[], int tam)
{
        int j;
        float soma = 0;

        for (j = 0; j < tam; j++) {
                soma += u[j];
        }

        return soma;
}

void lerVetor(float u[], int tam)
{
        int j;

        printf("\nCarregando vetor de %i elementos...\n", tam);

        for (j = 0; j < tam; j++) {
                printf("X[%i]: ", j);
                scanf("%f", &u[j]);
        }
}

void imprimirVetor(float u[], int tam)
{
        int j;

        printf("\nV:\n");

        for (j = 0; j < tam; j++) {
                printf("%.2f ", u[j]);
        }
        printf("\n");

}

main()
{
        float X[20];

        printf("SOMA DOS ELEMENTOS DE UM VETOR\n\n");

        lerVetor(X, 20);
        imprimirVetor(X, 20);

        printf("Soma = %.2f\n" , somar(X, 20));
}
