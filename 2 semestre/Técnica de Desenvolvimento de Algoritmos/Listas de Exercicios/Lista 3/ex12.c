#include <stdio.h>

main()
{
    printf("Soma, produto e media de varios conjuntos\n\n");

    //vars
    float media, n1, n2, n3, produto, soma;

    //Entradas
    printf("Insira o 1o numero: ");
    scanf("%f", &n1);

    printf("Insira o 2o numero: ");
    scanf("%f", &n2);

    printf("Insira o 3o numero: ");
    scanf("%f", &n3);

    while(n1<=n2 && n2<=n3)
    {
        soma = n1 + n2 + n3;
        produto = n1 * n2 * n3;
        media = (n1 + n2 + n3) / 3;

        printf("\nSoma: %.1f\n", soma);
        printf("Produto: %.1f\n", produto);
        printf("Media: %.1f\n\n", media);

        printf("Insira o 1o numero: ");
        scanf("%f",&n1);

        printf("Insira o 1o numero: ");
        scanf("%f",&n2);

        printf("Insira o 1o numero: ");
        scanf("%f",&n3);


    }
}
