#include <stdio.h>
#include <locale.h>

exemploFOR(){

    setlocale(LC_ALL, "Portuguese");

    int fahr;

    /*for(inicialização/menor valor, condição, step size/increment)*/
    for(fahr=0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32) );

}
