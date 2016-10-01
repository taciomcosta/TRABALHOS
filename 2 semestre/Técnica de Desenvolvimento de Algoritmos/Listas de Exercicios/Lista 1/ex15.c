#include <stdio.h>

main()
{
    //vars
    float salario, conta1, conta2, salarioFinal;

    printf("\t\t\tResto do salario\n\n");

    //Entradas
    printf("Joao, insira seu salario: ");
    scanf("%f",&salario);

    printf("Insira o valor da 1a conta: ");
    scanf("%f",&conta1);

    printf("Insira o valor da 2a conta: ");
    scanf("%f",&conta2);

    //Processamento
    conta1 *= 1.02;
    conta2 *= 1.02;
    salarioFinal = salario - conta1 - conta2;

    //Saída
    printf("Salario Final: R$ %.2f\n", salarioFinal);

}
