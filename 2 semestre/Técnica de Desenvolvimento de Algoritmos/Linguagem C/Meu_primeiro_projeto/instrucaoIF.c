#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> // bibliotca para manipulação de caracteres

int instrucaoif()
{
    setlocale(LC_ALL, "Portuguese");

    char c;

    printf("Digite um caractere de letra minúscula: ");
    scanf ("%c", &c);

    if ( c >= 'a')
    {
        printf("\nSegue a letra que você digitou em maiúscula: > %c < \n", toupper ( c ));

    }



    return 0;
}
