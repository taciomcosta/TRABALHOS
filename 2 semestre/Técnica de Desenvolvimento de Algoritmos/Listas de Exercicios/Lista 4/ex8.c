#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    int v[40], i;

    //Entrada
    for( i=0; i<40; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d",&v[i]);
    }

    //Processamento
    for( i=0; i<39; i++)
    {
        v[i+1] += v[i];
    }

    //Sa�da
    printf("\n\nVetor Resultante: \n");
    for( i=0; i<40; i++)
    {
        printf("%d\n", v[i]);

    }
}
