#include <stdio.h>

void classificarTriangulo(int x, int y, int z);

main()
{
    /* vars */
    int l1, l2, l3;

    printf("CLASSIFICACAO DE UM TRIANGULO\n\n");

    /* Entrada */
    printf("Insira o 1o lado do triangulo: ");
    scanf("%i", &l1);
    printf("Insira o 2o lado do triangulo: ");
    scanf("%i", &l2);
    printf("Insira o 3o lado do triangulo: ");
    scanf("%i", &l3);

    /* Processamento e Saída */
    classificarTriangulo(l1, l2, l3);
}

void classificarTriangulo(int x, int y, int z)
{
    if (x < y+z && y < x+z && z < x+y) {
        if (x == y && y == z) {
            printf("\nTRIANGULO EQUILATERO\n");
        } else if (x == y || x == z || y == z) {
            printf("\nTRIANGULO ISOCELES\n");
        } else {
            printf("\nTRIANGULO ESCALENO\n");
        }
    } else {
        printf("\nOS LADOS NAO FORMAM UM TRIANGULO!!!\n");
    }
}
