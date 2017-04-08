#include <stdio.h>

float calcularPesoIdeal(float a, char s);

main()
{
    /* vars */
    float altura, pesoIdeal;
    char sexo;

    printf("PESO IDEAL\n\n");

    /* Entrada */
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo);

    /* Processamento */
    pesoIdeal = calcularPesoIdeal(altura, sexo);

    /* Saída */
    printf("Peso ideal: %.2f\n", pesoIdeal);

}

float calcularPesoIdeal(float a, char s)
{
    if (s == 'M') {
        return 72.7 * a - 58;
    } else {
        return 62.1 * a - 44.7;
    }
}
