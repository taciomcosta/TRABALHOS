#include <stdio.h>

main()
{
    printf("Valor da compra\n\n");

    //vars
    int qtd, codigo;
    float preco, desconto, total;


    //Entradas
    printf("Insira o codigo do produto comprado: ");
    scanf("%i",&codigo);

    printf("Insira a quantidade do produto comprado: ");
    scanf("%d",&qtd);

    //Processamento

    //Atribuindo o valor do produto
    if ( codigo >= 1 && codigo <=10 )
        preco = 10;
    else if ( codigo <= 20 )
        preco = 15;
    else if ( codigo <= 30 )
        preco = 20;
    else
        preco = 30;

    total = preco * qtd;

    //Atribuindo desconto a nota
    if ( total <= 250 )
        desconto = total * 0.05;
    else if ( total <= 500 )
        desconto = total * 0.1;
    else
        desconto = total * 0.15;

    total -= desconto;

    //Saída
    printf("Total da nota: R$%.2f",total);



}
