#include <stdio.h>

main()
{
    printf("Maior e menor entre 15 valores\n\n");

    //vars
    int i, num, maior, menor;

    printf("Insira um numero inteiro (1): ");
    scanf("%i", &num);

    //Processamento
    maior = num;
    menor = num;

    for (i=2; i<=15; i++)
    {
        if( num > maior )
        {
            maior = num;
        }
        else if ( num < menor )
        {
            menor = num;
        }

        printf("Insira um numero inteiro(%d): ", i);
        scanf("%d", &num);
    }

    //Saída
    printf("\nMenor numero: %d\n", menor);
    printf("Maior numero: %d\n", maior);

}
