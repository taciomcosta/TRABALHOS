#include <stdio.h>
#include <math.h>

main()
{
    //vars
    float catetoOposto, catetoAdjacente, hipotenusa;

    printf("\t\t\tHipotenusa de um triangulo\n\n");

    //Entrada
    printf("Insira o tamanho do cateto adjacente: ");
    scanf("%f",&catetoAdjacente);

    printf("Insira o tamanho do cateto oposto: ");
    scanf("%f",&catetoOposto);

    //Processamento
    hipotenusa = sqrt( pow(catetoAdjacente, 2) + pow(catetoOposto, 2) );

    //Saída
    printf("Hipotenusa = %.2f", hipotenusa);

}
