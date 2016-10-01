#include <stdio.h>

main()
{
    printf("Reajuste salarial\n\n");

    //vars
    float salarioInicial, salarioFinal;

    //Entrada
    printf("Insira o salario do funcionario: ");
    scanf("%f",&salarioInicial);

    //Processamento
    if ( salarioInicial < 500 )
    {
        salarioFinal = salarioInicial * 1.3;
        printf("Salario com reajuste de 30%: R$%.2f", salarioFinal);
    }
    else
        printf("O funcionario nao possui direito ao aumento de 30%");

}
