#include <stdio.h>

float calcularSomatorio(float n)
{
    float i,
        s = 0;

    for (i = 1; i <= n; i++) {
        s += 1/i;
    }

    return s;
}

main()
{
    /* vars */
    float num, somatorio;

    printf("SOMATORIO: 1 + 1/2 + 1/3 + ... + 1/N\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &num);

    /* Processamento */
    somatorio = calcularSomatorio(num);

    /* Saída */
    printf("\nS = 1 + 1/2 + 1/3 + ... + 1/%.0f = %f\n", num, somatorio);
}
