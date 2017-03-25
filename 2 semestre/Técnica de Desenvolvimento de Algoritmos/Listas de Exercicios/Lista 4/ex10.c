#include <stdio.h>

main()
{
    printf("Numero por extenso\n\n");

    //vars
    int v[5], i;

    for(i=0; i<5; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d",&v[i]);
    }

    printf("\n");
    for(i=0; i<5; i++)
    {
        if( v[i] == 0 )
            printf("Zero");
        else if( v[i] == 1 )
            printf("Um ");
        else if( v[i] == 2 )
            printf("Dois ");
        else if( v[i] == 3 )
            printf("Tres ");
        else if( v[i] == 4 )
            printf("Quatro ");
        else if( v[i] == 5 )
            printf("Cinco ");
        else if( v[i] == 6 )
            printf("Seis ");
        else if( v[i] == 7 )
            printf("Sete ");
        else if( v[i] == 8 )
            printf("Oito ");
        else if( v[i] == 9 )
            printf("Nove ");
    }

}
