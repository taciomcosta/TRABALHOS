#include <stdio.h>

main()
{
    //vars
    float dMaior, dMenor, area;

    printf("\t\t\tArea de um Losango\n\n");

    //Entrada
    printf("Insira o tamanho da diagonal maior: ");
    scanf("%f",&dMaior);

    printf("Insira o tamanho da diagonal menor: ");
    scanf("%f",&dMenor);

    //Processamento
    area = (dMaior * dMenor) / 2;

    //Saída
    printf("Area = %.2f", area);

}
