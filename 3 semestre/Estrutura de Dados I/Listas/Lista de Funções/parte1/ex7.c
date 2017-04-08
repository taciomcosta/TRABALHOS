#include <stdio.h>

int numPerfeito(int n)
{
    int i, somaDivisores = 0;

    for (i = 1; i < n; i++) {
        if (n%i == 0) {
            somaDivisores += i;
        }
    }

    if (somaDivisores == n) {
        return 1;
    } else {
        return 0;
    }
}

main()
{
    /* vars */
    int num;

    printf("NUMERO PERFEITO\n\n");

    /* Entrada */
    printf("Digite um numero: ");
    scanf("%i", &num);

    /* Processamento e Saída */
    if (numPerfeito(num)) {
        printf("%d eh perfeito!!!\n", num);
    } else {
        printf("%d NAO eh perfeito!!!\n", num);
    }
}
