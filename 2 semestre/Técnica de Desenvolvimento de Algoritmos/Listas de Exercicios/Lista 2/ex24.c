#include <stdio.h>

main()
{
    printf("Aumento\n\n");

    //vars
    float preco, imposto;
    char categoria[1], situacao[1];

    //Entrada

    //Preco
    printf("Insira o preco do produto: R$");
    scanf("%f",&preco);

    //Situacao
    system("cls");
    printf("Situacao\n\n");
    printf("R - produtos que necessitam de refrigeracao\n");
    printf("N - produtos que nao necessitam de refrigeracao\n");
    printf("Insira a situacao do produto(R/N): ");
    scanf("%s",situacao);

    //Categoria
    system("cls");
    printf("Categoria\n\n");
    printf("1 - limpeza\n\n");
    printf("2 - alimentacao\n\n");
    printf("3 - vestuario\n\n");
    printf("Insira a categoria do produto(R/N): ");
    scanf("%s",categoria);

    //Processamento
    if ( situacao == 'R' || categoria == 2)
        imposto = preco * 0.05;
    else
        imposto = preco * 0.08;


    if ( preco <= 25 )
    {
        if( categoria == 1 )
            preco = preco * 1.05;
        else if ( categoria == 2 )
            preco = preco * 1.08;
        else
            preco = preco * 1.1;

    }
    else
    {
        if( categoria == 1 )
            preco = preco * 1.12;
        else if ( categoria == 2 )
            preco = preco * 1.15;
        else
            preco = preco * 1.18;
    }

    preco -= imposto;

    //Saída
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Novo preco: R$ %.2f\n", preco);

    if ( preco <= 50 )
        printf("Classificacao: Barato");
    else if ( preco < 120 )
        printf("Classificacao: Normal");
    else
        printf("Classificacao: Caro");






}
