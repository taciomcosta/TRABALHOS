#include <stdio.h>

main()
{
    printf("Maior numero entre tres \n\n");

    //vars
    int n1, n2, n3;

    //Entrada
    printf("Insira o 1o numero: ");
    scanf("%d",&n1);

    printf("Insira o 2o numero: ");
    scanf("%i",&n2);

    printf("Insira o 3o numero: ");
    scanf("%d",&n3);

    //Processamento
    if ( n1>n2 && n1>n3 )
        printf("%i eh o maior numero", n1);
    else
        if( n2>n1 && n2>n3 )
            printf("%d eh o maior numero", n2);
        else
            if ( n3>n1 && n2>n1 )
                printf("%i eh o maior numero", n3);


}
