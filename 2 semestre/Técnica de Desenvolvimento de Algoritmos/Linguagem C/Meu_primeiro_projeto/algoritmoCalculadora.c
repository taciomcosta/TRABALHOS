#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int algoritmoCalculadora()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma, subtracao, multi, div, res;


    printf("Digite os 2 números a serem processados: ");
    scanf("%i%i", &num1, &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1/num2;
    res = num1 % num2;

    printf("A soma é: %i\n", soma);
    printf("A subtracação é: %i\n", subtracao);
    printf ("O produto é: %i\n", multi);
    printf ("A divisão é: %i\n", div);
    printf ("O resto da divisão é: %i", res);


    return 0;
}
