#include <stdio.h>
#include <math.h>

main()
{
    //vars
    float raio, comprimento, area, volume;

    printf("\t\t\tComprimento, area e volume de uma esfera\n\n");

    //Entrada
    printf("Insira o raio da esfera: ");
    scanf("%f",&raio);

    //Processamento
    comprimento = 2 * 3.14 * raio;
    area = 3.14 * pow( raio, 2 );
    volume = 4 * 3.14 * pow( raio, 3 ) / 3 ;

    //Saída
    printf("Comprimento = %.2f\n", comprimento);
    printf("Area = %.2f\n", area);
    printf("Volume = %.2f\n", volume);


}
