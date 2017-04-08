#include <stdio.h>
#include <math.h>

double calcularSoma(double num);

int main()
{
    /* vars */
    double N, S;

    printf("SOMATORIO: 1 + 1/2² + 1/3³ + ... + 1/N^N\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%lf", &N);

    /* Processamento */
    S = calcularSoma(N);

    /* Saída */
    printf("SOMATORIO = %.2lf\n", S);
}

double calcularSoma(double num)
{
    /* vars */
    double i,
        soma = 0;

    for (i = 1; i <= num; i++) {
        soma += 1/pow(i, i);
    }

    return soma;
}
