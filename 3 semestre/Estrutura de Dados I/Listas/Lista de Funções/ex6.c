#include <stdio.h>

int calcularIdade(int a, int m, int d)
{
    int total;

    total = a * 365 + m * 30 + d;

    return total;
}

main()
{
    /* vars */
    int anos, meses, dias, idade;

    printf("IDADE EM DIAS\n");

    /* Entrada */
    printf("Anos: ");
    scanf("%i", &anos);

    printf("Meses: ");
    scanf("%i", &meses);

    printf("Dias: ");
    scanf("%i", &dias);

    /* Processamento */
    idade = calcularIdade(anos, meses, dias);

    /* Saída */
    printf("\nIDADE EM DIAS: %d\n", idade);
}
