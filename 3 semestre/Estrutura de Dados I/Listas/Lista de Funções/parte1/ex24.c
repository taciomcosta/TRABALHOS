#include <stdio.h>

float calcularSomatorio(float n)
{
    float i, j, fat,
        s = 0;

    for (i = 1; i <= n; i++) {
        /* calculando o fatorial de i */
        fat = 1;
        for (j = 1; j <= i; j++) {
            fat *= j;
        }
        s += 1/fat;
    }

    return s;
}

main()
{
    /* vars */
    float num, somatorio;

    printf("SOMATORIO: 1 + 1/2! + 1/3! + ... + 1/N!\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &num);

    /* Processamento */
    somatorio = calcularSomatorio(num);

    /* Saída */
    printf("\nS = 1 + 1/2! + 1/3! + ... + 1/%.0f! = %f\n", num, somatorio);
}
