//Largest Collatz sequence under 1.000.000
#include <stdio.h>

main()
{
    long int cont=0, nCont=0;
    long int n, number=0, aux;

    for( n=1000000; n<=100000; n--)
    {
        printf("%li\n",n );
        aux = n;
        cont = 0;
        while( aux != 1 )
        {
            if ( aux%2 ==0 )
                aux /= 2;
            else
                aux = aux*3 + 1;

            cont++;
        }
        if( nCont < cont )
        {
            nCont = cont;
            number = n;
        }

    }

    printf("Number: %li\n", number);
    printf("Number of terms: %d\n", nCont);

}
