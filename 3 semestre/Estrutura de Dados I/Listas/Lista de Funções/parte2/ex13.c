#include <stdio.h>

void lerVetor(int v[], int tam)
{
        int j;

        printf("\nCarregando vetor de %i elementos:\n\n", tam);
        for (j = 0; j < tam; j++) {
                printf("V[%i]: ", j);
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

void zerarNegativos(int v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                if (v[j] < 0) {
                        v[j] = 0;
                }
        }
}

main()
{
        /* vars */
        int A[25];

        printf("ZERANDO VALORES NEGATIVOS\n\n");

        /* Entrada */
        lerVetor(A, 25);
        /* Processamento */
        printf("\nA:\n");
        imprimirVetor(A, 25);
        zerarNegativos(A, 25);
        /* Saída */
        printf("\nA (zerado):\n");
        imprimirVetor(A, 25);

}
