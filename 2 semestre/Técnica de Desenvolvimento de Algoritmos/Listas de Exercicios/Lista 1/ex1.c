#include <stdio.h>

main()
{
    //vars
    float n1,n2,res;

    printf("\t\t\tSubtracao entre dois numeros\n\n");

    //Entradas
    printf("Insira o 1o numero: ");
    scanf("%f",&n1);

    printf("Insira o 2o numero: ");
    scanf("%f", &n2);

    //Processamento
    res = n1 - n2;

    //Saída
    printf("%.2f - %.2f = %.2f", n1, n2, res);

}
