#include <stdio.h>
#include <math.h>

void calcularBhaskara(float a, float b, float c);

main()
{
    /* vars */
    float A, B, C;

    printf("RAIZES DE UMA FUNCAO QUADRATICA\n\n");

    /* Entrada */
    printf("Digite A: ");
    scanf("%f", &A);

    printf("Digite B: ");
    scanf("%f", &B);

    printf("Digite C: ");
    scanf("%f", &C);

    /* Processamento e Saída */
    calcularBhaskara(A, B, C);
}

void calcularBhaskara(float a, float b, float c)
{
    float delta, x1, x2;

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("\nx1 = %.2f", x1);
        printf("\nx2 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("\nx1 = %.2f\n", x1);
    } else {
        printf("\nNAO EXISTEM RAIZES REAIS!!!\n");
    }
}
