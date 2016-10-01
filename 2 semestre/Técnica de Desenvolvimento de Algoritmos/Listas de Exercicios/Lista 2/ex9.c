#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    float saldoMedio, credito;

    //Entrada
    printf("Insira o saldo medio do cliente: ");
    scanf("%f",&saldoMedio);

    //Processamento
    if ( saldoMedio <= 200 )
        credito = saldoMedio * 0.1;
    else if ( saldoMedio <= 300 )
        credito = saldoMedio * 0.2;
    else if ( saldoMedio <= 400 )
        credito = saldoMedio * 0.25;
    else
        credito = saldoMedio * 0.3;

    printf("Saldo medio = R$%.2f\n", saldoMedio);
    printf("Credito = R$%.2f", credito);

}
