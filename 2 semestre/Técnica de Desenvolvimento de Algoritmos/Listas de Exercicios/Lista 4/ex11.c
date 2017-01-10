#include <stdio.h>

main()
{
    printf("Anagramas\n\n");

    //vars
    char p1[5], p2[5];
    int i, j, cont=0;

    //Entrada
    printf("Digite a 1o palavra: ");
    scanf("%s",p1);

    printf("Digite a 2o palavra: ");
    scanf("%s",p2);

    //Processamento
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if( p1[i] == p2[j] )
                cont++;
        }
    }

    //Saída
    if( cont == 4)
        printf("As palavras sao anagramas");
    else
        printf("As palavras NAO sao anagramas");

}
