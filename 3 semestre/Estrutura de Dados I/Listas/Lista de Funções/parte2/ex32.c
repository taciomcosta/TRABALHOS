#include <stdio.h>

#define T 6

void multiplicar(int a, int m[][T])
{
        int k, l;
        int contV = 0;
        int v[T*T];

        /* Processamento */
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        v[contV] = m[k][l] * a;
                        contV++;
                }
        }


        /* Saída */
        printf("\nV:\n");
        for (k = 0; k < T*T; k++) {
                printf("%i\n", v[k]);
        }
}

main()
{
        /* vars */
        int M[T][T];
        int i, j, A;

        printf("MULTIPLICACAO ESCALAR DE UMA MATRIZ\n\n");

        /* Entraada */
        printf("\nCarregando matriz %ix%i:\n", 4, T);
        for (i = 0; i < T; i++) {
                for (j = 0; j < T; j++) {
                        printf("m[%i][%i]: ", i, j);
                        scanf("%i", &M[i][j]);
                }
        }

        printf("Digite um valor inteiro A: ");
        scanf("%i", &A);

        /* Processamento e Saída */
        printf("\nM:\n");
        for (i = 0; i < 4; i++) {
                for (j = 0; j < T; j++) {
                        printf("%i ", M[i][j]);
                }
                printf("\n");
        }

        multiplicar(A, M);
}
