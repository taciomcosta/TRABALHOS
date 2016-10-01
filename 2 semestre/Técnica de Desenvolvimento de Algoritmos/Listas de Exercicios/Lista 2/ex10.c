#include <stdio.h>

main()
{
    printf("Custo ao consumidor\n\n");

    //vars
    float custoConsumidor, pDistribuidor, impostos, custoFabrica;

    //Entrada
    printf("Insira o custo de fabrica do veiculo: ");
    scanf("%f",&custoFabrica);

    //Processamento
    if ( custoFabrica <= 12000 )
    {
        pDistribuidor = custoFabrica * 0.05;
        impostos = 0;
    }
    else if ( custoFabrica <= 25000 )
    {
        pDistribuidor = custoFabrica * 0.1;
        impostos = custoFabrica * 0.15;
    }
    else
    {
        pDistribuidor = custoFabrica * 0.15;
        impostos = custoFabrica * 0.2;
    }

    custoConsumidor = custoFabrica + pDistribuidor + impostos;

    //Saída
    printf("Custo ao consumidor R$%.2f", custoConsumidor);

}
