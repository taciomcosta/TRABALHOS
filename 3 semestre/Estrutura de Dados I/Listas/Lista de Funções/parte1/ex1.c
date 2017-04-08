#include <stdio.h>

float calcularVolume(float r);

main()
{
    /* vars */
    float raio;

    printf("VOLUME DE UMA ESFERA\n");

    /* Entrada */
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    /* Processamento e Saída */
    printf("\nVolume = %.2f\n", calcularVolume(raio));
}

float calcularVolume(float r)
{
    return (4 * 3.14 * r * r * r) / 3;
}
