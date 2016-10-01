#include <stdio.h>

main()
{
    printf("Gratificacao Natalina\n\n");

    //vars
    float h, horasE, horasF;

    //Entradas
    printf("Insira a quantidade de horas extras trabalhadas: ");
    scanf("%f",&horasE);

    printf("Insira a quantidade de horas faltadas: ");
    scanf("%f",&horasF);

    //Processamento
    h = horasE - (2 * horasF) / 3;

    //Saída
    if ( h < 600 )
        printf("Gratificacao: R$ 100,00");
    else if ( h < 1200 )
        printf("Gratificacao: R$ 200,00");
    else if ( h <= 1800 )
        printf("Gratificacao: R$ 300,00");
    else if ( h < 2400 )
        printf("Gratificacao: R$ 400,00");
    else
        printf("Gratificacao: R$ 500,00");
}
