#include <stdio.h>

void classificar(int i);

main()
{
    /* vars */
    int idade;

    printf("CLASSIFICACAO DE NADADAOR\n\n");

    /* Entrada */
    printf("Digite a idade do nadador: ");
    scanf("%i", &idade);

    /* Processamento e Saída */
    classificar(idade);
}

void classificar(int i)
{
    if (i>=5 && i < 8) {
        printf("\nCATEGORIA: INFANTIL A\n");
    } else if (i < 10) {
        printf("\nCATEGORIA: INFANTIL B\n");
    } else if (i < 13) {
        printf("\nCATEGORIA: JUVENIL A\n");
    } else if (i < 17) {
        printf("\nCATEGORIA: JUVENIL B\n");
    } else {
        printf("\nCATEGORIA: ADULTO\n");
    }
}
