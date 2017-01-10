#include <stdio.h>

main()
{
    printf("Soma dos impares no intervalo [1,n]\n\n");

    //vars
    int n, i, soma=0;

    //Entrada
    printf("Insira um numero inteiro positivo: ");
    scanf("%d",&n);

    //Processamento
    for(i=1; i<=n; i++)
    {
        if( i%2 == 1 )
            soma+= i;
    }

    //Saída
    printf("\nSoma = %i", soma);
}
