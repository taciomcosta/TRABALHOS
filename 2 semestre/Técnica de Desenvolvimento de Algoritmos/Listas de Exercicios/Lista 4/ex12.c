#include <stdio.h>

main()
{
    printf("Juntando tercos de vetores\n\n");

    //vars
    int v1[9], v2[9], v3[9], res[9], i;

    //Entradas
    for( i=0; i<9; i++)
    {
        printf("Digite v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    for( i=0; i<9; i++)
    {
        printf("Digite v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    for( i=0; i<9; i++)
    {
        printf("Digite v3[%d]: ", i);
        scanf("%d", &v3[i]);
    }

    //Processamento
    for( i=0; i<3; i++)
    {
        res[i] = v1[i];
    }

    for( i=3; i<6; i++)
    {
        res[i] = v2[i];
    }

    for( i=6; i<9; i++)
    {
        res[i] = v3[i];
    }

    //Saída
    printf("\n\nVetor Resultante: \n");
    for( i=0; i<9; i++)
    {
        printf("%d  ", res[i]);
    }

}
