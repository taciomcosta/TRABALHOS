#include <stdio.h>

main()
{
    printf("Operacao entre dois numeros\n\n");

    //vars
    float n1, n2, res;
    int opcao;

    //Entrada
    printf("Insira o 1o numero: ");
    scanf("%f", &n1);

    printf("Insira o 2o numero: ");
    scanf("%f", &n2);

    system("cls");

    printf("Opcoes:\n\n\t1-Media entre os dois numeros\n");
    printf("\t2-Diferenca do maior pelo menor\n");
    printf("\t3-Produto entre os dois numeros\n");
    printf("\t4-Divisao do primeiro pelo segundo\n\n");
    printf("Insira o numero da operacao desejada: ");
    scanf("%i",&opcao);

    //Processamento e saída
    if ( opcao == 1 )
    {
        res = ( n1 + n2 ) / 2;
        printf("Resultado = %.2f", res);
    }
    else if ( opcao == 2 )
    {
        if ( n1 > n2 )
            res = n1 - n2;
        else
            res = n2 - n1;
        printf("Resultado = %.2f", res);
    }
    else if ( opcao == 3 )
    {
        res = n1 * n2;
        printf("Resultado = %.2f", res);
    }
    else if ( opcao == 4 )
    {
        if ( n2 != 0 )
        {
            res = n1 / n2;
            printf("Resultado = %.2f", res);
        }
        else
            printf("NÃO EXISTE DIVISAO POR ZERO!!!\n");
    }
    else
        printf("Opcao invalida!");



}
