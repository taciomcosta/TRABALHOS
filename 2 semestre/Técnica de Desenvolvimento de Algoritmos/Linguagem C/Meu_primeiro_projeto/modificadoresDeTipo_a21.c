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
    1) signed -> números positivos e negativos
    2) unsigned -> números positivos
    3)long -> aumentar a capacidade de armazenamento da váriavel
    4) short -> diminuir a capacidade de armazenamento da váriavel

    NÃO É POSSÍVEL UTILIZAR TODOS MODIFICADORES COM double E float.
    */


    int i = 10;
    unsigned short int u;
    printf( "Variável u = %i bytes \n", sizeof(u) ); /*função sizeoff() = mostra o tamanho que a váriavel ocupa (em bytes)*/
    printf( "Variável i = %i bytes ", sizeof(i) );

    return 0;
}
