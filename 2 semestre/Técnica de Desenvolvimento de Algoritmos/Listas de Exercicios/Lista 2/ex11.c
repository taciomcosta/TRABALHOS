#include <stdio.h>

main()
{
    printf("Aumento Salarial\n\n");

    //vars
    float salarioInicial, aumento, salarioFinal;

    //Entrada
    printf("Insira o salario atual do funcionario: ");
    scanf("%f",&salarioInicial);

    //Processamento
    if ( salarioInicial <= 300 )
        aumento = salarioInicial * 0.15;
    else if ( salarioInicial <= 600 )
        aumento = salarioInicial * 0.1;
    else if ( salarioInicial <= 900 )
        aumento = salarioInicial * 0.05;
    else
        aumento = 0;

    salarioFinal = salarioInicial + aumento;

    //Saída
    printf("Aumento R$ %.2f\n", aumento);
    printf("Salario final: R$%.2f\n", salarioFinal);

}
