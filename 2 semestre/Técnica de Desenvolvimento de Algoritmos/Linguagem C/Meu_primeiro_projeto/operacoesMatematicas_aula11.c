#include <stdio.h>
#include <stdlib.h>

int operacoesMatematicas()
{

    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf ("O resultado da soma e %i\n\n", soma);

    int subtracao = num2 - num1;
    printf ("O resultado da subtracao e %i\n\n", subtracao);

    int multi = num1 * num2;
    printf ("O resultado da multiplicacao e %i\n\n", multi);

    int div = num2/3; // divisão com números inteiros, o programa remove as casas decimais, mas não arredonda.
    printf("O resultado da divisao e %i\n\n", div);


    return 0;
}
