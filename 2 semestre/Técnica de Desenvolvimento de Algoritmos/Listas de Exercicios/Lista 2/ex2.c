#include <stdio.h>

main()
{
    printf("\t\t\tMedia entre duas notas\n\n");

    //vars
    float n1, n2, media;

    //Entradas
    printf("Insira a 1o nota: ");
    scanf("%f",&n1);

    printf("Insira a 2o nota: ");
    scanf("%f",&n2);

    //Processamento
    media = ( n1 + n2 ) / 2;


    //Saída
    if( media < 4 )
        printf("Mensagem: Reprovado");
    else if ( media < 7 )
        printf("Mensagem: Exame");
    else
        printf("Mensagem: Aprovado");

    printf("\nMedia: %.2f", media);

}
