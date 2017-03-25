#include <stdio.h>

main()
{
    printf("");

    //vars
    float massaF, massaI;
    int totalSegundos=0, h=0, m=0, s=0;

    //Entrada
    printf("Insira a massa inicial do material, em gramas: ");
    scanf("%f", &massaF);

    //Processamento
    massaI = massaF;

    while( massaF > 0.5 )
    {
        massaF /= 2;
        totalSegundos += 50;
    }

    h = totalSegundos / 3600;
    m = (totalSegundos%3600) / 60;
    s = (totalSegundos%3600) % 60;

    printf("\nMassa Inicial: %.2f gramas\n", massaI);
    printf("Massa Final: %.2f gramas\n", massaF);
    printf("Tempo: %ih %dm %is ", h, m, s);

}
