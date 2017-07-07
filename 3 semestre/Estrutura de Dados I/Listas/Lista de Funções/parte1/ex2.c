#include <stdio.h>

double calcularMedia(double n1, double n2, double n3, char tipo);

main()
{
    /* vars */
    double nota1, nota2, nota3, media;
    char tipo;

    printf("MEDIA DE UM ALUNO\n");

    /* Entradas */
    printf("Digite a 1o nota: ");
    scanf("%lf", &nota1);

    printf("Digite a 2o nota: ");
    scanf("%lf", &nota2);

    printf("Digite a 3o nota: ");
    scanf("%lf", &nota3);

    printf("\nOpcoes:\n");
    printf("A - Aritmetica\n");
    printf("P - Ponderada\n");
    printf("H - Harmonica\n");

    printf("\nDigite o tipo de média: ");
    scanf(" %c", &tipo);

    /* Processamento */
    media = calcularMedia(nota1, nota2, nota3, tipo);

    printf("\nMEDIA: %.2lf\n", media);
}

double calcularMedia(double n1, double n2, double n3, char tipo)
{
    /* Aritmética */
    if (tipo == 'A') {
        return (n1 + n2 + n3) / 3;
    /* Ponderada */
    } else if (tipo == 'P') {
        return (n1*5 + n2*3 + n3*2) / (5 + 3 + 2);
    /* Harmônica */
    } else if (tipo == 'H'){
        return 3 / (1/n1 + 1/n2 + 1/n3);
    }
}
