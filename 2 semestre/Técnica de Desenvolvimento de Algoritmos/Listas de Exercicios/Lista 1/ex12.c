#include <stdio.h>

main()
{
    //vars
    float salarioMinimo, salarioFuncionario, qtSalMinimo;

    printf("\t\t\tQuantidade de salarios minimos\n\n");

    //Entradas
    printf("Insira o valor do salario minimo: ");
    scanf("%f",&salarioMinimo);

    printf("Insira o valor do salario do funcionario: ");
    scanf("%f",&salarioFuncionario);

    //Processamento
    qtSalMinimo = salarioFuncionario / salarioMinimo;

    //Saída
    printf("Quantidade de salarios minimos ganhos: %.2f", qtSalMinimo);

}
