#include <stdio.h>

#define T 50

void imprimirVetor(float v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%.2f\n", v[j]);
        }
        printf("\n");
}

void dividirPeloMaior(float v[])
{
        int j;
        float maior = v[0];

        /* encontrado o maior elemento */
        for (j = 0; j < T; j++) {
                if (v[j] > maior) {
                        maior = v[j];
                }
        }

        /* dividindo */
        for (j = 0; j < T; j++) {
                v[j] /= maior;
        }

        printf("\nVETOR DIVIDIDO POR %.2f:\n", maior);
        imprimirVetor(v, T);
}

main()
{
        /* vars */
        float B[T];
        int i;

        printf("VETOR DIVIDIDO PELO MAIOR ELEMENTO\n\n");

        /* Entrada */
        printf("Carregando vetor de %i elementos:\n", T);
        for (i = 0; i < T; i++) {
                printf("B[%i]: ", i);
                scanf("%f", &B[i]);
        }

        /* Processamento e Saída */
        printf("\nB:\n");
        imprimirVetor(B, T);
        dividirPeloMaior(B);
}
