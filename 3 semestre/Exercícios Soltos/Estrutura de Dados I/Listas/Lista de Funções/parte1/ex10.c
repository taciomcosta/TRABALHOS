#include <stdio.h>

int numPar(int n);

main()
{
    /* vars */
    int num;

    printf("NUMERO PAR OU IMPAR\n\n");

    /* Entrada */
    printf("Digite um numero: ");
    scanf("%i", &num);

    /* Processamento e saída */
    if (numPar(num)) {
        printf("\n%d eh par!!!\n", num);
    } else {
        printf("\n%d eh impar!!!\n", num);
    }
}

int numPar(int n)
{
    if (n%2 ==0)
        return 1;
    else
        return 0;
}
