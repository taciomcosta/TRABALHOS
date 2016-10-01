#include <stdio.h>

main()
{
    //vars
    int angulo1, angulo2, angulo3;

    printf("\t\t\t3o angulo de um triangulo\n\n");

    //Entrada
    printf("Insira o valor do 1o angulo: ");
    scanf("%d",&angulo1);

    printf("Insira o valor do 2o angulo: ");
    scanf("%d",&angulo2);

    //Processamento
    angulo3 = 180 - angulo1 - angulo2;

    //Saída
    printf("3o angulo = %i", angulo3);

}

