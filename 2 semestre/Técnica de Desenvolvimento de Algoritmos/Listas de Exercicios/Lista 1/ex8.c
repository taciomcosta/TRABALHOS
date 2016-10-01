#include <stdio.h>

main()
{
    //vars
    float pesoKilos, pesoGramas;

    printf("\t\t\tPeso Kilos --> Peso Gramas\n\n");

    //Entrada
    printf("Insira seu peso em KG: ");
    scanf("%f",&pesoKilos);

    //Processamento
    pesoGramas = pesoKilos * 1000;

    //Saída
    printf("Peso em gramas: %.0f", pesoGramas);

}
