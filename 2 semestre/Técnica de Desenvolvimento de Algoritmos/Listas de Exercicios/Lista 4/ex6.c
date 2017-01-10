#include <stdio.h>

main()
{
    printf("Atribuindo 0 para valores negativos de um vetor\n\n");

    //vars
    int v[40], i;

    //Entrada
    for( i=0; i<40; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d",&v[i]);
    }

    //Processamento
    for( i=0; i<40; i++)
    {
        if( v[i] < 0 )
            v[i] = 0;
    }

    //Saída
    printf("\n\nVetor Resultante: \n");
    for( i=0; i<40; i++)
    {
        printf("\n%d", v[i]);
    }
}
