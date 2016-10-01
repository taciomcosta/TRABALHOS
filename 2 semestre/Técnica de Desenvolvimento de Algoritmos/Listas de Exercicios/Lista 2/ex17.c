#include <stdio.h>

main()
{
    printf("Validacao de Senha\n\n");

    //vars
    int senha;


    //Entrada
    printf("Por favor, insira a senha para acessar o programa: ");
    scanf("%i", &senha);

    if ( senha == 4531 )
        printf("Acesso permitido.\nBem-vindo!");
    else
        printf("Acesso negado");

}
