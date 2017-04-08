#include <stdio.h>

int numPositivo(int n);

main()
{
    /* vars */
    int num;

    printf("NUMERO POSITIVO OU NEGATIVO\n\n");

    /* Entrada */
    printf("Digite um numero: ");
    scanf("%i", &num);

    /* Processamento e Saída */
    if (numPositivo(num)) {
        printf("\n%d eh positivo!!!\n", num);
    } else {
        printf("\n%d eh negativo!!!\n", num);
    }
}

int numPositivo(int n)
{
    if (n >= 0)
        return 1;
    else
        return 0;
}
