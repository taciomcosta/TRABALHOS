#include <stdio.h>

main()
{
    printf("Idade de um nadador\n\n");

    //vars
    int idade;

    //Entrada
    printf("Insira a idade do nadaddor: ");
    scanf("%d",&idade);

    //Processamento e Saída
    if ( idade >= 5 && idade <= 7 )
        printf("Categoria: Infantil");
    else if ( idade >= 8 && idade <= 10 )
        printf("Categoria: Juvenil");
    else if ( idade >= 11 && idade <= 15 )
        printf("Categoria: Adolescente");
    else if ( idade >= 16 && idade <= 30 )
        printf("Categoria: Adulto");
    else
        printf("Categoria: Senior");

}
