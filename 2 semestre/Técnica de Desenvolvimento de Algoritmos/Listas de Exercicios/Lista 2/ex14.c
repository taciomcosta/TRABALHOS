#include <stdio.h>

main()
{
    printf("Reajuste Salarial\n\n");

    //vars
    float salarioI, salarioF;

    //Entrada
    printf("Insira o salario atual do funcionario: ");
    scanf("%f",&salarioI);

    //Processamento
    if ( salarioI <= 300 )
        salarioF = salarioI * 1.5;
    else if( salarioI <= 500 )
        salarioF = salarioI * 1.4;
    else if( salarioI <= 700)
        salarioF = salarioI * 1.3;
    else if ( salarioI <= 800 )
        salarioF = salarioI * 1.2;
    else if ( salarioI <= 100 )
        salarioF = salarioI * 1.1;
    else
        salarioF = salarioI * 1.05;

    //Saída
    printf("Novo salário: R$%.2f", salarioF);

}
