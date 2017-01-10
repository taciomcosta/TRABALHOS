/*
Este algoritmo ordena em ordem crescente, conforme são inseridos no vetor
*/
#include <stdio.h>

main()
{
    int v[5]={0}, i, j, cont=0, num;
    for( cont=0; cont<5; cont++ )
    {
        scanf("%d",&num);
        for( i=0; i<5; i++ )
        {
            if( i == cont )
                v[i] = num;
            else if( num < v[i] )
            {
                for( j=4; j>i; j-- )
                {
                    v[j] = v[j-1];
                }
                v[i] = num;
                i=5;
            }
        }
    }

    printf("FINAL:\n");
    for( i=0; i<5; i++ )
        printf("%d\n",v[i]);

}
