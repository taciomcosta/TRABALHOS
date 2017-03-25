#include <stdio.h>

main()
{
    printf("Numero Perfeito\n\n");

    //vars
    int num, divisor, soma=0;

    //Entrada
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    //Processamento
    for(divisor=1; divisor<num; divisor++)
    {
        if( num%divisor == 0 )
        {
            soma += divisor;
        }

    }

    //Saída
    if( num == soma )
        printf("%i eh perfeito", num);
    else
        printf("%d NAO eh perfeito", num);


}
