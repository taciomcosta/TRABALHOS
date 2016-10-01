#include <stdio.h>

main()
{
    //vars
    float hTrabalhadas, eTrabalhadas, valorHTrabalhadas, valorETrabalhadas, salarioMinimo, salarioFinal;

    printf("\t\t\tSalario a receber\n\n");

    //Entrada;
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f",&hTrabalhadas);

    printf("Insira a quantidade de horas extra trabalhadas: ");
    scanf("%f",&eTrabalhadas);

    printf("Insira o valor do salario minimo: ");
    scanf("%f",&salarioMinimo);

    //Processamento
    valorHTrabalhadas = salarioMinimo / 8;
    valorETrabalhadas = salarioMinimo / 4;
    salarioFinal = (valorHTrabalhadas * hTrabalhadas) + ( valorETrabalhadas * eTrabalhadas );

    //Saída
    printf("Salario a receber: R$%.2f", salarioFinal);

}

