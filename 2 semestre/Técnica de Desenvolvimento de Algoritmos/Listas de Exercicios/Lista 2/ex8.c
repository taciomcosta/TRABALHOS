#include <stdio.h>

main()
{
    printf("Reajuste Salarial\n\n");

    //vars
    float salarioInicial, salarioFinal;

    //Entrada
    printf("Insira o salario do funcionario: ");
    scanf("%f",&salarioInicial);

    //Processamento
    if ( salarioInicial <= 300 )
    {
        salarioFinal = salarioInicial * 1.35;
    }
    else
    {
        salarioFinal = salarioInicial * 1.15;
    }

    //Saída
    printf("Salario reajustado: R$%.2f", salarioFinal);

}
