#include <stdio.h>

main()
{
    printf("Menor numero\n\n");

    //vars
    int n1, n2;


    //Entradas
    printf("Insira o 1o numero: ");
    scanf("%i", &n1);

    printf("Insira o 2o numero: ");
    scanf("%d",&n2);

    //Processamento e Saída
    if ( n1 == n2 )
        printf("Os numeros sao iguais\n");
    else if ( n1 < n2 )
        printf("%i eh menor que %d", n1, n2);
    else
        printf("%i eh menor que %d", n2, n1);


}
