#include <stdio.h>

main()
{
    //vars
    float precoAtual, novoPreco;

    printf("\t\t\tDesconto de 10%\n\n");

    //Entrada
    printf("Insira o preco atual do produto: ");
    scanf("%f",&precoAtual);

    //Processamento
    novoPreco = precoAtual * 0.9;

    //Saída
    printf("Novo preco: %.2f", novoPreco);

}
