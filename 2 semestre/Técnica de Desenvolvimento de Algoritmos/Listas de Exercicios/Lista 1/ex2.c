#include <stdio.h>

main()
{
    //vars
    float a,b,c,res;

    printf("\t\t\tMultiplicacao entre 3 numeros\n\n");

    //Entradas
    printf("Insira o 1o numero: ");
    scanf("%f",&a);

    printf("Insira o 2o numero: ");
    scanf("%f",&b);

    printf("Insira o 3o numero: ");
    scanf("%f",&c);

    //Processamento
    res = a * b * c;

    //Saída
    printf("%.2f * %.2f * %.2f = %.2f", a, b, c, res);


}
