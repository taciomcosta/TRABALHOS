#include <stdio.h>

main()
{
    //vars
    float salarioFixo, vendas, comissao, salarioFinal;

    printf("\t\t\tSalario Funcionario\n\n");

    //Entradas
    printf("Insira o salario fixo: ");
    scanf("%f",&salarioFixo);

    printf("Insira o valor das vendas: ");
    scanf("%f",&vendas);

    //Processamento
    comissao = vendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    //Saída
    printf("Comissao: R$%.2f", comissao);
    printf("Salario Final: R$%.2f", salarioFinal);


}
