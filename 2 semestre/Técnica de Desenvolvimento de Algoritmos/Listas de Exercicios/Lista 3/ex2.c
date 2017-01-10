#include <stdio.h>

main()
{
    printf("Tabuada de 0 a 9\n\n");

    //vars
    int i,j;

    for(i=0; i<=9; i++)
    {
        printf("\nTabuada do %i\n", i);
        for(j=0;j<=10;j++)
        {
            printf("%d x %i = %i\n", j, i, j*i);

        }

    }


}
