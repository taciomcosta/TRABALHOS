#include <stdio.h>

main()
{
    printf("Precedencia de um produto\n\n");

    //vars
    float preco;
    int codigo;

    //Entrada
    printf("Insira o preco do produto: R$ ");
    scanf("%f",&preco);

    printf("Insira o codigo de precedencia do produto: ");
    scanf("%d",&codigo);

    //Processamento
    if ( codigo == 1 )
        printf("Precedencia: Sul");
    else if( codigo == 2  )
        printf("Precedencia: Norte");
    else if ( codigo == 3 )
        printf("Precedencia: Leste");
    else if ( codigo == 4 )
        printf("Precedencia: Oeste");
    else if ( codigo == 5 || codigo == 6 )
        printf("Precedencia: Nordeste");
    else if ( codigo == 7 || codigo == 8 || codigo == 9 )
        printf("Precedencia: Sudeste");
    else if ( codigo >= 10 || codigo <= 20 )
        printf("Precedencia: Centro-oeste");
    else
        printf("Precedencia: Nordeste");
}
