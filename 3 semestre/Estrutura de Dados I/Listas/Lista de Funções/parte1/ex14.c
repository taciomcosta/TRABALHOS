#include <stdio.h>

void calcularDuracao(int hI, int mI, int hF, int mF);

main()
{
    /* vars */
    int horaInicial, minutoInicial, horaFinal, minutoFinal;

    printf("DURACAO DE UM JOGO\n\n");

    /* Entrada */
    printf("Hora inicial: ");
    scanf("%i", &horaInicial);

    printf("Minuto inicial: ");
    scanf("%i", &minutoInicial);

    printf("Hora final: ");
    scanf("%i", &horaFinal);

    printf("Minuto final: ");
    scanf("%i", &minutoFinal);

    /* Processamento e Saída */
    printf("\nInicio: %dh %dmin\n", horaInicial, minutoInicial);
    printf("Fim: %dh %dmin\n", horaFinal, minutoFinal);

    calcularDuracao(horaInicial, minutoInicial, horaFinal, minutoFinal);

}

void calcularDuracao(int hI, int mI, int hF, int mF)
{
    /* se a duração máxima exceder 24hrs*/
    if (hI-hF == 24 || hF-hF == 24) {
        printf("TEMPO MÁXIMO: 24HRS");
    } else {
        /* se começar e terminar no mesmo dia */
        if (hI <= hF) {
            if (mI <= mF) {
                printf("DURACAO: %dh %dmin\n", hF-hI, mF-mI);
            } else {
                printf("DURACAO: %dh %dmin\n", hF-hI-1, mI-mF);
            }
        } else {
            if (mI <= mF) {
                printf("DURACAO: %dh %dmin\n", (24-hI)+hF, mF-mI);
            } else {
                printf("DURACAO: %dh %dmin\n", (24-hI)+hF, mI-mF);
            }
        }
    }
}
