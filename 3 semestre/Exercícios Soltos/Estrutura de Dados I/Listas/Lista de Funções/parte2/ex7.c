#include <stdio.h>

#define T 3

void lerVetor(int u[])
{
        int j;

        printf("\nCarregando vetor de %i elementos...\n", T);

        for (j = 0; j < T; j++) {
                printf("v[%i]: ", j);
                scanf("%i", &u[j]);
        }
}

void imprimirVetor(int u[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%i ", u[j]);
        }
        printf("\n");
}

void unir(int a[], int b[])
{
        int j, k, min, max;
        int uniao[T*2], soma[T*2];
        int contUniao = 0;

        /* vetor SOMA */
        for (j = 0; j < T; j++) {
                soma[j] = a[j];
                soma[T+j] = b[j];
        }

        /* encontrando o menor e maior elemento de SOMA */
        min = soma[0];
        max = soma[0];
        for (j = 0; j < T*2; j++) {
                if (soma[j] < min) {
                        min = soma[j];
                }

                if (soma[j] > min) {
                        max = soma[j];
                }
        }

        /* determinadno o vetor uniao */
        for (j = min; j <= max; j++) {
                for (k = 0; k < T*2; k++) {
                        if (soma[k] == j) {
                                uniao[contUniao] = soma[k];
                                k = T*2;
                                contUniao++;
                        }
                }
        }

        printf("\nV || U\n");
        imprimirVetor(uniao, contUniao);
}

main(){
        /* vars */
        int v[T], w[T], i;

        printf("VETOR UNIAO\n\n");

        /* Entrada */
        lerVetor(v);
        lerVetor(w);

        /* Processamento e Saída */
        printf("\nV\n");
        imprimirVetor(v, T);
        printf("\nU\n");
        imprimirVetor(w, T);
        unir(v, w);
}
