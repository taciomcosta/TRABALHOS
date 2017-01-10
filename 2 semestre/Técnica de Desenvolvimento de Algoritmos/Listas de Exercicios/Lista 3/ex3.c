#include <stdio.h>

main()
{
    printf("Tabela de Loja de Xerox\n\n");

    //vars
    float num;
    int i, cont=1;

    //Entrada
    printf("Digite um numero real: ");
    scanf("%f", &num);

    //Processamento e Saída
    for(i=1; i<=200; i++)
    {
        if(cont==11)
        {
            printf("\n");
            cont=1;
        }
        printf("%d = %f  ", i, i*num);
        cont++;

    }
}
