#include <stdio.h>

main()
{
    printf("Soma de uma Sequencia de Fracoes 2/1 + 3/2 + 5/3 + ...\n\n");

    //vars
    int n, i;
    float n1=2,n2=3,n3,d1=1,d2=2,d3, soma=0;

    //Entrada
    printf("Digite a quantidade de termos: ");
    scanf("%d",&n);

    printf("Soma = %.0f/%.0f + %.0f/%.0f ", n1, d1, n2, d2);


    //Processamento
    soma += (n1/d1) + (n2/d2);
    for(i=3; i<=n; i++)
    {
        n3 = n2+d2;
        d3 = d1+d2;

        printf("+ %.0f/%.0f", n3, d3);
        soma += n3/d3;

        n1 = n3;
        d1 = d3;

        //Atribuindo n2 para n1 e n3 para n2
        n3 = n2;
        d3 = d2;

        n2 = n1;
        d2 = d1;

        n1 = n3;
        d1 = d3;

    }

    //Saída
    printf("\nSoma= %.2f", soma);

}
