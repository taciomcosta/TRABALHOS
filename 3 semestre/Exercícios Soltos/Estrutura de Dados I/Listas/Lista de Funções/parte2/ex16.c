#include <stdio.h>

void lerVetor(int v[], int tam)
{
        int i;

        printf("\nCarregando vetor de %i elementos:\n", tam);
        for (i = 0; i < tam; i++) {
                printf("v[%i]: ", i);
                scanf("%i", &v[i]);
        }
}

void imprimirVetor(int v[], int tam)
{
        int i;

        for (i = 0; i < tam; i++) {
                printf("%i ", v[i]);
        }
        printf("\n");
}

void interseccionar(int v[], int u[], int tamV, int tamU)
{
        int interseccao[tamV+tamU];
        int i, j, k,
                contInterseccao = 0;

        for (i = 0; i < tamV; i++) {
                k = 0;
                /* comparação entre os vetores V e V */
                for (j = i+1; j < tamV; j++) {
                        if (v[i] == v[j]) { /* se houver valores repetidos no vetor, o while abaixo só será executado para o valor de maior posição */
                                j = tamV;
                                k = tamU;
                        }
                }

                /* comparação entre os vetores V e U */
                while (k < tamU) {
                        if (v[i] == u[k]) {
                                interseccao[contInterseccao] = v[i];
                                contInterseccao++;
                                k = tamU;
                        }

                        k++;
                }
        }

        /* Saída */
        printf("\nInterseccao (%i):\n", contInterseccao);
        imprimirVetor(interseccao, contInterseccao);
}

main()
{
        /* vars */
        int A[10], B[10];

        printf("VETOR INTERSECCAO\n\n");

        /* Entrada */
        lerVetor(A, 10);
        lerVetor(B, 10);
        /* Processamento e Saída */
        printf("\nA:\n");
        imprimirVetor(A, 10);
        printf("\nB:\n");
        imprimirVetor(B, 10);
        interseccionar(A, B, 10, 10);
}
