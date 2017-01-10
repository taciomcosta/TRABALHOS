#include <stdio.h>

int main()
{
    printf("Conta da Lanchonete\n\n");

    //vars
    int codigo=1, qtd;
    float total=0, preco;

    while ( codigo!=0 )
    {
        printf("Itens \n");
        printf("Cachorro quente - 100 - R$ 1,20\n");
        printf("Bauru simples - 101 - R$ 1,30\n");
        printf("Bauru com ovo - 102 - R$ 1,50\n");
        printf("Insira o codigo do produto: ");
        scanf("%i", &codigo);
        printf("Insira a quantidade do produto: ");
        scanf("%d",&qtd);

        switch (codigo)
        {
            case 100:
                preco = 1.2 * qtd;
            break;
            case 101:
                preco = 1.3 * qtd;
            break;
            case 102:
                preco = 1.5 * qtd;
            break;
        }

        total += preco;

        printf("Adicionar item? \n");
        printf("1 - Sim\n");
        printf("0 - Não, finalizar a conta\n");
        scanf("%d",&codigo);
    }

    printf("Total a pagar: R$%.2f\n", total);

}

