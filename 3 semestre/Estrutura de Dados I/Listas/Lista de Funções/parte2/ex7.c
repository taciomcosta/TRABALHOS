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

        printf("\nV:\n");

        for (j = 0; j < tam; j++) {
                printf("%i ", u[j]);
        }
        printf("\n");
}

void unir(int a[], int b[])
{
        int j, k, uniao[T*2], interseccao[T],
                contUniao = 0,
                contInterseccao = 0;

        /* gera a intersecção de acordo com os elementos de B */
        for (j = 0; j < T; j++) {
                for (k = 0 ; k < T; k++) {
                        if (b[j] == a[k]) {
                                interseccao[contInterseccao] = b[j];
                                contInterseccao++;
                        }
                }
        }

        /* passa o vetor A para união */
        for (j = 0; j < T; j++) {
                uniao[contUniao] = a[j];
                contUniao++;
        }

        /* passa o vetor B menos o vetor intersecção */
        k = 0;
        j = 0;

        while (j < contInterseccao) {
                while (b[k] != interseccao[j]) {
                        uniao[contUniao] = b[k];
                        contUniao++;
                        k++;
                }

                k++;
                j++;
        }

        while (k < T) {
                uniao[contUniao] = b[k];
                contUniao++;
                k++;
        }

        imprimirVetor(uniao, contUniao);
}

main()
{
        /* vars */
        int v[T], w[T], i;

        printf("VETOR UNIAO\n\n");

        /* Entrada */
        lerVetor(v);
        lerVetor(w);

        /* Processamento e Saída */
        imprimirVetor(v, T);
        imprimirVetor(w, T);
        unir(v, w);
}
