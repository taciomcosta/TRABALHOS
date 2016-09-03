#include <stdio.h>
#include <stdlib.h>

int operadoresLogicos19(){


    //&& (e)
    //(true) && (true)

    int i = 40;
    int condicao = !(i>20) && (i<100); // ! (NÃO)


    printf("%i", condicao);
    printf("%i\n\n", !condicao);

    //|| (ou)
    //(true) || (false) -> 1
    //(false) || (true) -> 1
    //(true) || (true) -> 1
    //(false) || (false( -> 0

    system("cls"); //limpatela

    int x = 10;
    int cond = 0;

    cond = (x==10) || (x<1);

    printf( "%i", cond );



    return 0;
}
