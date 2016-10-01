#include <stdio.h>
#include <math.h>

main()
{
    //vars
    float area, lado;

    printf("\t\t\tArea de um quadrado\n\n");

    //Entrada
    printf("Insira o tamanho do lado do quadrado: ");
    scanf("%f",&lado);

    //Processamento
    area = pow( lado, 2);

    //Saída
    printf("Area = %.2f", area);

}
