#include <stdio.h>

main()
{
    printf("Peso ideal\n\n");

    //vars
    float altura, peso;
    char sexo[1];

    //Entrada
    printf("Insira sua altura em metros: ");
    scanf("%f",&altura);

    printf("Insira o seu sexo (F/M): ");
    scanf("%s",sexo);

    //Processamento
    if ( sexo == 'M' )
        peso = ( 72.7 * altura ) - 58;
    else
        peso = ( 62.1 * altura ) - 44.7;

    printf("\nPeso ideal: %.1fKg",peso);



}
