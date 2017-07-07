#include <stdio.h>

void imprimirTabuada(int n);

main()
{
    /* vars */
    int num;

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    /* Processamento e Saída */
    printf("TABUADA\n");
    imprimirTabuada(num);
}

void imprimirTabuada(int n)
{
    int i;

    for (i = 1; i <= n; i++) {
        printf("%i x %i = %i\n", n, i, i*n);
    }
}
