#include <stdio.h>

main()
{
    printf("Soma de Dois Elementos\n\n");

    //vars
    int v[12], i, x, y, soma;

    //Entradas
    for( i=0; i<12; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d",&v[i]);
    }

    printf("\nDigite uma posicao X(0<=X<12): ");
    scanf("%d",&x);

    printf("Digite uma posicao Y(0<=Y<12): ");
    scanf("%d", &y);

    //Processamento
    soma = v[x] + v[y];

    //Saída
    printf("Soma = %d + %d = %d", v[x], v[y] soma);


}
