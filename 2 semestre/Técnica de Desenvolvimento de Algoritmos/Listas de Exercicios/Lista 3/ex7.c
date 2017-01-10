#include <stdio.h>

main()
{
    printf("Numeros entre 1000 e 1999, que, divididos por 9, restam 6\n\n");

    //vars
    int i;

    //Processamento
    for(i=1000; i<=1999; i++)
    {
        if( i%9 == 6)
        {
            printf("%i <- Divisivel por 9 e resta 6\n", i);
        }
        else
        {
            printf("%i\n", i);
        }

    }

}
