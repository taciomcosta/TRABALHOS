#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> // bibliotca para manipula��o de caracteres

int instrucaoif()
{
    setlocale(LC_ALL, "Portuguese");

    char c;

    printf("Digite um caractere de letra min�scula: ");
    scanf ("%c", &c);

    if ( c >= 'a')
    {
        printf("\nSegue a letra que voc� digitou em mai�scula: > %c < \n", toupper ( c ));

    }



    return 0;
}
