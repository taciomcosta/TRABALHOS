#include <stdio.h>

main()
{
    printf("\t\t\tAprovacao ou reprovacao de alunos\n\n");

    //vars
    float n1, n2, n3, n4, media;

    //Entradas
    printf("Insira a 1o nota: ");
    scanf("%f",&n1);

    printf("Insira a 2o nota: ");
    scanf("%f",&n2);

    printf("Insira a 3o nota: ");
    scanf("%f",&n3);

    printf("Insira a 4o nota: ");
    scanf("%f",&n4);

    //Processamento
    media = ( n1 + n2 + n3 + n4 ) / 4;

    //Saída
    if ( media >= 7 )
        printf("Aluno APROVADO!\n");
    else
        printf("Aluno REPROVADO!\n");

    printf("Media = %.2f", media);

}
