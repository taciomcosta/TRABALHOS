#include <stdio.h>

main()
{
    //vars
    int lados, diagonais;

    printf("\t\t\tNumero de diagonais de um poligono convexo\n\n");

    //Entrada
    printf("Insira o numero de lados do poligono: ");
    scanf("%d",&lados);

    //Processamento
    diagonais = (lados * (lados - 3)) / 2;

    //Saída
    printf("Numero de diagonais: %i", diagonais);

}

