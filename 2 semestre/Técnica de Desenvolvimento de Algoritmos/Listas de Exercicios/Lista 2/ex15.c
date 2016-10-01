#include <stdio.h>

main()
{
    printf("Investimento financeiro\n\n");

    //vars
    float valorInv, valorCorrigido;
    int tipo;

    //Entrada
    printf("Insira o valor a ser investido: ");
    scanf("%f",&valorInv);

    printf("\n\nInsira o numero do tipo de investimento\n");
    printf("1 - Poupanca\n");
    printf("2 - Fundos de renda fixa\n");
    scanf("%i",&tipo);

    //Processamento e Saída
    if ( tipo == 1 )
    {
        valorCorrigido = valorInv * 1.03;
        printf("Rendimento mensal: 3%\n");
        printf("Valor corrigido: R$%.2f",valorCorrigido);
    }
    else
    {
        valorCorrigido = valorInv * 1.04;
        printf("Rendimento mensal: 4%\n");
        printf("Valor corrigido: R$%.2f",valorCorrigido);
    }

}
