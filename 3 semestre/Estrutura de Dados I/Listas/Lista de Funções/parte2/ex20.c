#include <stdio.h>

void imprimirVetor(int v[], int tam)
{
        int j;

        for (j = 0; j < tam; j++) {
                printf("%i\n", v[j]);
        }
}

void encontrarPrimos(int v[], int tamV)
{
        int j, k, cont,
                contP = 0;
        int P[tamV];

        for (j = 0; j < tamV; j++) {
                cont = 0;
                for (k = 1; k <= v[j]; k++) {
                        if (v[j]%k == 0) {
                                cont++;
                        }
                }

                if (cont == 2) {
                        P[contP] = v[j];
                        contP++;
                }
        }

        /* Saída */
        printf("\nP:\n");
        imprimirVetor(P, contP);
}

main()
{
        /* vars */
        int i;
        int K[15];

        printf("VETOR PRIMO DE UM VETOR PRINCIPAL\n\n");

        /* Entrada */
        printf("\nCarregando vetor de 15 elementos:\n");
        for (i = 0; i < 15; i++) {
                printf("K[%i]: ", i);
                scanf("%i", &K[i]);
        }

        /* Processamento e Saída */
        printf("\nK:\n");
        imprimirVetor(K, 15);
        encontrarPrimos(K, 15);
}
