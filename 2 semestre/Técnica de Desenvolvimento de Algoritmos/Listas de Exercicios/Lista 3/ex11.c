#include <stdio.h>

main()
{
    printf("Soma dos Pares e Impares\n\n");

    //vars
    int num, somaPar=0, somaImpar=0;

    //Entrada
    printf("Insira um numero ate 1000, ou maior que 1000 para terminar: ");
    scanf("%d",&num);

    while(num <= 1000)
    {
        if( num%2 == 0)
            somaPar += num;
        else
            somaImpar += num;

        printf("Insira um numero ate 1000, ou maior que 1000 para terminar: ");
        scanf("%i",&num);
    }

    printf("\nSoma dos pares: %i\n", somaPar);
    printf("Soma dos impares: %i", somaImpar);



}
