#include <stdio.h>

main()
{
    printf("10 Primeiros Impares\n\n");

    //vars
    int v[10], i=1, cont=0;

    //Entrada e Processamento
    while( cont < 10)
    {
        if( i%2 != 0 )
        {
            v[cont] = i;
            cont++;
        }
        i++;
    }

    //Saída
    printf("\nVetor Resultante: \n");
    for( i=0; i<10; i++)
    {
        printf("%d ", v[i]);
    }
}
