#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int modificadoresDeTipo(){

    /*
    1) char
    2) int
    3) float
    4) double
    5) void - vazio

    == MODIFICADORES DE TIPO ==
    1) signed -> n�meros positivos e negativos
    2) unsigned -> n�meros positivos
    3)long -> aumentar a capacidade de armazenamento da v�riavel
    4) short -> diminuir a capacidade de armazenamento da v�riavel

    N�O � POSS�VEL UTILIZAR TODOS MODIFICADORES COM double E float.
    */


    int i = 10;
    unsigned short int u;
    printf( "Vari�vel u = %i bytes \n", sizeof(u) ); /*fun��o sizeoff() = mostra o tamanho que a v�riavel ocupa (em bytes)*/
    printf( "Vari�vel i = %i bytes ", sizeof(i) );

    return 0;
}
