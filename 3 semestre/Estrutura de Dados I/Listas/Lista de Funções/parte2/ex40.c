#include <stdio.h>

#define T 10

void lerMatriz(float m[][T])
{
        int k, l;

        printf("\nCarregando matriz %i x %i:\n", T, T);
        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("m[%i][%i]: ", k, l);
                        scanf("%f", &m[k][l]);
                }
        }
}

void imprimirMatriz(float m[][T])
{
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        printf("%.2f ", m[k][l]);
                }
                printf("\n");
        }
}

float calcularSomaTriangularSuperior(float m[][T])
{
        float total = 0;
        int k, l;

        for (k = 0; k < T; k++) {
                for (l = 0; l < T; l++) {
                        if (k < l) {
                                total += m[k][l];
                        }
                }
        }

        return total;

}

main()
{
        /* vars */
        float M[T][T];
        float soma;

        printf("SOMA DA TRIANGULAR SUPERIOR\n\n");

        /* Entrada */
        lerMatriz(M);

        /* Processamento e Saída */
        printf("\nM:\n");
        imprimirMatriz(M);
        soma = calcularSomaTriangularSuperior(M);

        printf("\nMEDIA = %.2f\n", soma);
}
