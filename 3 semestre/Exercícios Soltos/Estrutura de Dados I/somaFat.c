#include <stdio.h>

double calcularSoma(double X);

int main()
{
    /* vars */
    double S, num;

    printf("SOMATORIO: X - X/1! + X/2! + ... + X/10!\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%lf", &num);

    /* Processamento */
    S = calcularSoma(num);

    /* Saída */
    printf("Somatorio = %.2lf\n\n", S);
}

double calcularSoma(double X)
{
    /* vars */
    double i, fat, j,
        soma = 0;

    /* pares */
    for (i = 0; i <= 10; i+=2) {
        /* calculando o fatorial */
        fat = 1;
        for (j = 2; j <= i; j++) {
            fat *= j;
        }

        soma += X/fat;
    }

    /* ímpares */
    for (i = 1; i <= 10; i+=2) {
        /* calculando o fatorial */
        fat = 1;
        for (j = 2; j <= i; j++) {
            fat *= j;
        }

        soma -= X/fat;
    }

    return soma;
}
