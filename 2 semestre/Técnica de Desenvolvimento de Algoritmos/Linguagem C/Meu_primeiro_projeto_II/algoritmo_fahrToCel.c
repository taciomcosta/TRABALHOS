#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fahrToCel(){
    setlocale(LC_ALL, "Portuguese");

    float f,c;
    int lower,upper,step;

    lower = 0; /*lower limit of temperature table*/
    upper = 300; /*upper limit*/
    step = 20; /*step size*/

    f=lower;

    printf("  F\t  C\n\n");

    while(f <= upper){
        c = (f-32.0)* 5.0/9.0;
        printf("%3.0f\t%6.1f\n", f, c); /*%6.1f indica que pode ser impresso 6 caracteres antes da vírgula, ou seja, 6 inteiros */
        f = f + step;                   /*  e 1 caractere depois, ou seja, 1 casa decimal. */
           }
    return 0;

}

