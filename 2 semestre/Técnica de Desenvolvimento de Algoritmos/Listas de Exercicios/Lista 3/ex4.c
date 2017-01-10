#include <stdio.h>

main()
{
    printf("Soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50\n\n");

    //vars
    float soma=0, numerador=1, denominador=1;


    //Processamento
    while( numerador <= 99 )
    {
        soma += numerador/denominador;
        numerador += 2;
        denominador++;

    }

    //Saída
    printf("Soma = %.2f", soma);



}
