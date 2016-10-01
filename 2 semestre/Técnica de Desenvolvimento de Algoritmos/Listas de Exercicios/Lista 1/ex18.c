#include <stdio.h>

main()
{
    //vars
    float celsius, farenheit;

    printf("\t\t\tConversao Celsius --> Farenheit\n\n");

    //Entrada
    printf("Insira a temperatura em celsius: ");
    scanf("%f",&celsius);

    //Processamento
    farenheit = (celsius * 9 + 160) / 5;

    //Saída
    printf("Temperatura em Farenheit: %.1f", farenheit);

}
