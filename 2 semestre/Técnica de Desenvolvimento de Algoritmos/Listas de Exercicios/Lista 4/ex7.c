#include <stdio.h>

main()
{
    printf("Vetores intercalados\n\n");

    //vars
    int v1[20], v2[20], res[40], i, contV1=0, contV2=0;

    //Entrada
    for( i=0; i<20; i++)
    {
        printf("Digite v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    for( i=0; i<20; i++ )
    {
        printf("Digite v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    //Processamento
    for( i=0; i<40; i++)
    {
        if( i%2 == 0)
        {
            res[i] = v1[contV1];
            contV1++;
        }
        else
        {
            res[i] = v2[contV2];
            contV2++;
        }
    }

    //Saída
    printf("\nVetor Resultante: \n\n");
    for( i=0; i<40; i++)
    {
        printf("%d\n", res[i]);
    }

}
