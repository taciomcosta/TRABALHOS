#include <stdio.h>

double calcularCos(double X);

main()
{
    /* vars */
    double x;

    printf("COS(X)\n\n");

    /* Entrada */
    printf("Digite um numero inteiro: ");
    scanf("%lf", &x);

    /* Processamento e Saída */
    printf("cos(%.0lf) = %.2lf\n", x, calcularCos(x));
}

double calcularCos(double X)
{
    /* vars */
    int i, j, subtrair = 1;
    long double fat, potencia,
        cos = 1;

    for (i = 2; i <= 40; i+=2) {
        /* calculando o fatorial */
        fat = 1;
        for (j = 1; j <= i; j++) {
            fat *= j;
        }

        /* calculando a potencia */
        potencia = 1;
        for (j = 0; j < i; j++) {
            potencia *= X;
        }

        /* somando/ subtraindo ao cosseno */
        if (!subtrair) {
            cos += potencia/fat;
            subtrair = 1;
        } else {
            cos -= potencia/fat;
            subtrair = 0;
        }
    }

    return cos;
}
