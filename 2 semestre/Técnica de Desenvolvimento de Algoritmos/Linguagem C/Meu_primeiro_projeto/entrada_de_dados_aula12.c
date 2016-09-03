#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Necessária para definir o idioma

int entrada_de_dados()

{

setlocale(LC_ALL, "Portuguese");// Define o idioma para português

    //scanf("tipo_de_entrada", &variavel que recebera);
    //scanf ("%tipo1%tipo2", &var1, &var2);

    int num1, num2;

    printf("Por favor, digite um número: \n");
    scanf("%i", &num1);

    printf("%i", num1);

    return 0;

}
