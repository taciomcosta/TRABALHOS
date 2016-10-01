#include <stdio.h>

main()
{
    printf("Maioridade\n\n");

    //vars
    int idade;

    //Entrada
    printf("Insira a sua idade: ");
    scanf("%i",&idade);

    //Processamento e Saída
    if ( idade < 18 )
        printf("Voce eh menor de idade\n");
    else
        printf("Voce eh maior de idade");

}
