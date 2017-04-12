#include <stdio.h>

#define T 6

int somarElementos(int n[][T])
{
        int soma = 0;
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k == l || k+l == T-1) {
                                soma += n[k][l];
                        }
                }
        }

        return soma;
}

main()
{
        /* vars */
        int m[T][T], i, j, total;

        printf("SOMA DOS ELEMENTOS DAS DIAGONAIS DA MATRIZ\n\n");

        /* Entrada */
        for (i = 0; i < T; i++) {
                for (j = 0; j < T; j++) {
                        printf("M[%i][%i]: ", i, j);
                        scanf("%i", &m[i][j]);
                }
        }

        /* Processamento*/
        total = somarElementos(m);

        /* Saída */
        printf("\nM:\n");
        for (i = 0; i < T; i++) {
                for (j = 0; j < T; j++) {
                        printf("%i ", m[i][j]);
                }
                printf("\n");
        }

        printf("\nSOMA DOS ELEMENTOS DAS DIAGONAIS:%i\n", total);
}
