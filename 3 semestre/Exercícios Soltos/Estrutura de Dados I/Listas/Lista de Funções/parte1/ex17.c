#include <stdio.h>

float calcularMedia();

main()
{
    /* vars */
    float media;

    printf("MEDIA DE UMA QUANTIDADE INDETERMINADA\n\n");

    media = calcularMedia();

    printf("\nMedia: %.2f\n", media);
}

float calcularMedia()
{
    /* vars */
    float n,
        cont = 0,
        totalN = 0;

    /* Entrada */
    printf("Digite um numero (0 para terminar): ");
    scanf("%f", &n);

    /* Processamento */
    while (n >= 0) {
        cont++;

        totalN += n;

        /* Entrada */
        printf("Digite um numero (0 para terminar): ");
        scanf("%f", &n);
    }

    /* Saída */
    if (cont == 0)
        return 0;

    return totalN / cont;

}
