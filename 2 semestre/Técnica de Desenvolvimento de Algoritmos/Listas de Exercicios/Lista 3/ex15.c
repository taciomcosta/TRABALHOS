#include <stdio.h>

main()
{
    printf("Numero Primo\n\n");

    //vars
    int n, divisor, cont=0;

    //Entrada
    printf("Insira um numero positivo: ");
    scanf("%d",&n);

    //Processamento
    for(divisor=1; divisor<=n; divisor++)
    {
        if( n%divisor == 0 )
            cont++;
    }

    //Saída
    if( cont == 2 )
        printf("%d eh primo", n);
    else
        printf("%d NAO eh primo", n);

}
