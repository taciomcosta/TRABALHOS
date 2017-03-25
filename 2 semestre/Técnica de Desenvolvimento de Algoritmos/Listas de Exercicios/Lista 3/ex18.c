#include <stdio.h>

main()
{
    printf("Soma 1 + 1/2 + 1/4 + 1/6 + ... + 1/E\n\n");

    //vars
    float e, i=2, soma=1;

    //Entrada
    printf("Digite o valor de E: ");
    scanf("%f",&e);

    //Processamento
    while(i<=e)
    {
        soma += 1/i;
        i= i+2;
    }

    //Saída
    printf("\nSoma = %.2f", soma);

}
