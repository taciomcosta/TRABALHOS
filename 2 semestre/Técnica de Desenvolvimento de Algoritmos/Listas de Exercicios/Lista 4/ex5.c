#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    int v[40], i, cont=0;

    //Entrada
    for( i=0; i<40; i++ )
    {
        printf("Digite v[%i]: ", i);
        scanf("%d",&v[i]);
    }

    //Processamento
    for( i=0; i<40; i++)
    {
        if( v[i]%2 == 0)
            cont++;
    }

    //Saída
    printf("\nQuantidade de numeros pares: %d\n", cont);
    for( i=0; i<40; i++)
    {
        if( v[i]%2 == 0 )
            printf("%d  ",v[i]);
    }

}
