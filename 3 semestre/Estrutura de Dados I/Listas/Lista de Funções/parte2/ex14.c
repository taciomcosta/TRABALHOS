#include <stdio.h>

void gerarPrimos(int v[], int qtd, int min)
{
        /* vars */
        int i, j, cont;

        i = 0;
        while (i < qtd) {
                cont = 0;
                for (j = 1; j <= min; j++) {
                        if (min%j == 0) {
                                cont++;
                        }
                }

                if (cont == 2) {
                        v[i] = min;
                        i++;
                }
                min++;
        }

}

main()
{
        /* vars */
        int k,
                quantidade = 10,
                minimo = 100;
        int primos[10];

        printf("%i PRIMOS MAIORES QUE %i\n\n", quantidade, minimo);

        /* Processamento */
        gerarPrimos(primos, quantidade, minimo);

        /* Saída */
        printf("\nX:\n");
        for (k = 0; k < quantidade; k++) {
                printf("%i ", primos[k]);
        }

}
