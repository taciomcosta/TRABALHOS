#include <stdio.h>

char verificarConceito(double m);

main()
{
    /* vars */
    double media;
    char conceito;

    printf("CONCEITO DA MEDIA DE UM ALUNO\n\n");

    /* Entrada */
    printf("Digite a media final do aluno: ");
    scanf("%lf", &media);

    /* Processamento*/
    conceito = verificarConceito(media);

    /* Saída */
    printf("\nCONCEITO: %c\n", conceito);
}

char verificarConceito(double m)
{
    if (m >= 0 && m < 5)
        return 'D';
    else if (m < 7)
        return 'C';
    else if (m < 9)
        return 'B';
    else if (m <= 10)
        return 'A';
}
