#include <stdio.h>

int numPrimo(int n);

main()
{
    /* vars */
    int num;

    printf("NUMERO PRIMO\n\n");

    /* Entrada */
    printf("Digite um numer inteiro e positivo: ");
    scanf("%d", &num);

    /* Processamento e Saída */
    if (numPrimo(num)) {
        printf("\n%d eh primo!!!\n", num);
    } else {
        printf("\n%d NAO eh primo!!!\n", num);
    }
}

int numPrimo(int n)
{
    int i, cont = 0;

    for (i = 1; i <=n; i++) {
        if (n%i == 0) {
            cont++;
        }
    }

    if (cont == 2) {
        return 1;
    } else {
        return 0;
    }
}
