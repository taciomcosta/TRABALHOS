#include <stdio.h>

main()
{
    printf("Produto dos numeros digitados\n\n");

    //vars
    float num, produto=1;

    //Entrada
    printf("Insira um numero: ");
    scanf("%f", &num);

    //Processamento
    while (num != 0)
    {
        produto *= num;

        printf("Insira um numero: ");
        scanf("%f", &num);
    }

    //Saída
    printf("\nProduto = %.2f", produto);

}
