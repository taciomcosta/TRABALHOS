#include <stdio.h>

main()
{
    //vars
    int anoNascimento, anoAtual, anos, meses, dias, semanas;

    printf("\t\t\tIdade em anos, meses, dias e semanas\n\n");

    //Entrada
    printf("Insira seu ano de nascimento: ");
    scanf("%d",&anoNascimento);

    printf("Insira o ano atual: ");
    scanf("%d",&anoAtual);

    //Processamento
    anos = anoAtual - anoNascimento;
    meses = anos*12;
    semanas = meses*4;
    dias = semanas*7;

    //Saída
    printf("Idade aproximada em: \n");
    printf("-anos: %d\n", anos);
    printf("-meses: %i\n", meses);
    printf("-semanas: %i\n", semanas);
    printf("-dias: %in", dias);




}
