#include <stdio.h>

int calcularSomatorio(int n)
{
    int i,
        s = 0;

    for (i = 0; i <= n; i++) {
        s += i;
    }

    return s;
}

main()
{
    /* vars */
    int num, somatorio;

    printf("SOMATORIO DE UM NUMERO\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    /* Processamento */
    somatorio = calcularSomatorio(num);

    /* Saída */
    printf("\nSOMARIO DE %d = %i\n", num, somatorio);
}
