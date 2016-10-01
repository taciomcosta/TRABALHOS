#include <stdio.h>

main()
{
    //vars
    int n1, n2, res;

    printf("\t\t\tDivisao entre dois numeros\n\n");

    //Entradas
    printf("Insira o 1o numero: ");
    scanf("%d",&n1);

    printf("Insira o 2o numero (diferente de zero): ");
    scanf("%i",&n2);

    //Processamento
    res = n1 / n2;

    //Saída
    printf("%i / %d = %i", n1, n2, res);


}
