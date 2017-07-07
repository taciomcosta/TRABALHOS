#include <stdio.h>

float calcularSomatorio(float n)
{
    float i,
        s = 0;

    for (i = 1; i <= n; i++) {
        s += (i*i+1) / (i+3);
    }

    return s;
}

main()
{
    /* vars */
    float num, somatorio;

    printf("SOMATORIO: 2/4 + 5/5 + ... + (n²+1)/(n+3)\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%f", &num);

    /* Processamento */
    somatorio = calcularSomatorio(num);

    /* Saída */
    printf("\nSOMATORIO: 2/4 + 5/5 + ... + %.0f/%.0f = %.1f\n", num*num+1, num+3, somatorio);
}
