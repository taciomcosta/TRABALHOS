#include <stdio.h>

main()
{
    //vars
    int v[4], n[4], res[8], i;

    //Entradas
    for( i=0; i<4; i++ )
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for( i=0; i<4; i++)
    {
        printf("Digite n[%d]: ", i);
        scanf("%d",&n[i]);
    }

    //Processamento
    for( i=0; i<4; i++)
    {
        res[i*2] = v[i];
        res[i*2+1] = n[i];
    }

    //Saída
    printf("res:\n");
    for( i=0; i<8; i++)
    {
        printf("%d\n",res[i]);
    }

}
