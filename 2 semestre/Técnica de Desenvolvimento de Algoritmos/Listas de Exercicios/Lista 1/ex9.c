#include <stdio.h>

main()
{
    //vars
    float baseMaior, baseMenor, altura, area;

    printf("\t\t\tArea de um trapezio\n\n");

    //Entradas
    printf("Insira o tamanaho da base maior: ");
    scanf("%f",&baseMaior);

    printf("Insira o tamanho da base menor: ");
    scanf("%f",&baseMenor);

    printf("Insira a altura: ");
    scanf("%f",&altura);

    //Processamento
    area = ( ( baseMaior + baseMenor ) * altura) / 2;

    //Saída
    printf("Area = %.2f", area);

}
