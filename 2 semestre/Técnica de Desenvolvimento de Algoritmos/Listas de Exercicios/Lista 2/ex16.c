#include <stdio.h>

main()
{
    printf("Desconto em produtos\n\n");

    //vars
    int codigo;
    float precoAtual, novoPreco, desconto;

    //Entrada
    printf("Insira o codigo do produto: ");
    scanf("%d",&codigo);

    printf("Insira o preco atual do produto: ");
    scanf("%f",&precoAtual);

    //Processamento
    if ( precoAtual <= 30 )
        desconto = 0;
    else if ( precoAtual <= 100 )
        desconto = precoAtual * 0.1;
    else
        desconto = precoAtual * 0.15;

    novoPreco = precoAtual - desconto;

    //Saída
    printf("Preco atual: R$%.2f\n", precoAtual);
    printf("Desconto: R$%.2f\n", desconto);
    printf("Novo preco: R$%.2f\n", novoPreco);


}
