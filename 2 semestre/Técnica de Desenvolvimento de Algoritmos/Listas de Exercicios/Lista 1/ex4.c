#include <stdio.h>

main()
{
    //vars
    float n1, n2, media;

    printf("\t\t\tMedia ponderada entre duas notas\n\n");

    //Entradas
    printf("Insira a 1o nota: ");
    scanf("%f",&n1);

    printf("Insira a 2o nota: ");
    scanf("%f",&n2);

    //Processamento
    media = ( n1*2 + n2*3 ) / ( 2 + 3 );

    //Saída
    printf("Media: %.2f\n", media);


}
