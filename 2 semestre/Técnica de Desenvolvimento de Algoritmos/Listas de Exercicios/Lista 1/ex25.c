#include <stdio.h>

main()
{
    //vars
    int h, m, horas, minutos, segundos;

    printf("\t\t\tConversao de Tempo\n\n");

    //Entrada
    printf("Insira a quantidade de horas: ");
    scanf("%d",&h);

    printf("Insira a quantidade de minutos: ");
    scanf("%d",&m);

    //Processamento
    horas = h*60;
    minutos = horas + m;
    segundos = minutos * 60;

    //Saída
    printf("Horas digitadas em minutos: %i min\n",horas);
    printf("Total de minutos: %i min\n",minutos);
    printf("Total de tempo em segundos: %i s\n", segundos);\

}

