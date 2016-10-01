#include <stdio.h>

int main()
{
    // vars
    int n1;

    printf("Numero par ou impar?\n");

    // Entrada
    printf("Insira um numero inteiro: ");
    scanf("%d",&n1);

    // Processamento e Saída
    if ( n1 % 2 ==0 )
        printf("%i eh par\n",n1);
    else
        printf("%i eh impar\n",n1);

    return 0;
}