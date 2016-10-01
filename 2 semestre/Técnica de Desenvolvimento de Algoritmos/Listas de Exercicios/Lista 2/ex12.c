#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    float salarioI, imposto, gratificacao, salarioF;

    //Entrada
    printf("Insira o salario do funcionario: ");
    scanf("%f",&salarioI);

    //Processamento
    imposto = salarioI * 0.07;

    if( salarioI <= 350 )
        gratificacao = 100;
    else if ( salarioI <= 600 )
        gratificacao = 75;
    else if ( salarioI <= 900 )
        gratificacao = 50;
    else
        gratificacao = 35;

    salarioF = salarioI - imposto + gratificacao;

    //Saída
    printf("Salario a receber: R$%.2f", salarioF);

}
