#include <stdio.h>

main()
{
    //vars
    float pesoAtual, pesoGordo, pesoMagro;

    printf("\t\t\tComparacao de pesos\n\n");

    //Entrada
    printf("Insira seu peso atual em KG: ");
    scanf("%f",&pesoAtual);

    //Processamento
    pesoGordo = pesoAtual * 1.15;
    pesoMagro = pesoAtual * 0.8;

    //Saída
    printf("Peso se engordar 15%: %.1f KG\n", pesoGordo);
    printf("Peso se emagrecer 20%: %.1f KG\n", pesoMagro);

}
