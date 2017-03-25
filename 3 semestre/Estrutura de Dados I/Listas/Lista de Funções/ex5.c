#include <stdio.h>

void calcularTempo(int t);

main()
{
    /* vars */
    int tempo;

    printf("TEMPO EM HORAS, MINUTOS E SEGUNDOS\n\n");

    /* Entrada */
    printf("Digite o tempo em segundos: ");
    scanf("%i", &tempo);

    /* Processamento e Saída */
    calcularTempo(tempo);
}

void calcularTempo(int t)
{
    int h, m, s;

    h = t / 3600;
    m = (t % 3600) / 60;
    s = (t % 3600) % 60;

    printf("\nTempo: %dh %dmin %ds\n", h, m, s);
}
