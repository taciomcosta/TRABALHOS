#include <stdio.h>

main()
{
    //vars
    float largura, profundidade, area, potencia;

    printf("\t\t\tPotencia de iluminacao\n\n");

    //Entrada
    printf("Insira a largura do comodo em metros: ");
    scanf("%f",&largura);

    printf("Insira a profundidade do comodo em metros: ");
    scanf("%f",&profundidade);

    //Processamento
    area = largura * profundidade;
    potencia = area * 18;

    //Sa�da
    printf("Area do comodo: %.2f\n", area);
    printf("Pot�ncia para iluminar o comodo: %.2f\n", potencia);



}
