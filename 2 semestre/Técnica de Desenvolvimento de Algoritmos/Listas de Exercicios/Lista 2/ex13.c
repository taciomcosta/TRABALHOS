#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    float precoI, precoF;


    //Entrada
    printf("Insira o preco inicial do produto: ");
    scanf("%f",&precoI);

    //Processamento
    if ( precoI <= 50 )
        precoF = precoI * 1.05;
    else if ( precoI <= 100 )
        precoF = precoI * 1.1;
    else
        precoF = precoI * 1.15;

    //Saída
    printf("Preco com aumento: R$%.2f\n", precoF);

    if ( precoF <= 80 )
        printf("Classificacao: Barato\n");
    else if ( precoF <= 120 )
        printf("Classificacao: Normal\n");
    else if ( precoF <= 200 )
        printf("Classificacao: Caro\n");
    else
        printf("Classificacao: Muito Caro\n");

}
