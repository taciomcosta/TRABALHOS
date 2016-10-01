#include <stdio.h>

main()
{
    //vars
    float dinheiro, dolares, marco, libras;

    printf("\t\t\tConversao de dinheiro\n\n");

    //Entrada
    printf("Insira a quantia em reais: ");
    scanf("%f",&dinheiro);

    //Processamento
    dolares = dinheiro * 1.8;
    marco = dinheiro * 2;
    libras = dinheiro * 1.57;

    //Saída
    printf("Conversao para:\n");
    printf("-dolares: %.2f\n", dolares);
    printf("-marco alemao %.2f\n", marco);
    printf("-libras esterlinas: %.2f\n", libras);

}

