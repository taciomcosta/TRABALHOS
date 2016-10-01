#include <stdio.h>

main()
{
    printf("Grupo de risco\n\n");

    //vars
    int idade;
    float peso;

    //Entrada
    printf("Insira sua idade: ");
    scanf("%i",&idade);

    printf("Insira seu peso em Kg: ");
    scanf("%f",&peso);

    //Processamento e Saída
    if ( idade < 20 )
    {
        if( peso <= 60 )
            printf("Grupo de risco: 9");
        else if ( peso <= 90 )
            printf("Grupo de risco: 8");
        else
            printf("Grupo de risco: 7");

    }
    else if ( idade <= 50 )
    {
        if( peso <= 60 )
            printf("Grupo de risco: 6");
        else if ( peso <= 90 )
            printf("Grupo de risco: 5");
        else
            printf("Grupo de risco: 4");
    }
    else
    {
        if( peso <= 60 )
            printf("Grupo de risco: 3");
        else if ( peso <= 90 )
            printf("Grupo de risco: 2");
        else
            printf("Grupo de risco: 1");
    }

}



