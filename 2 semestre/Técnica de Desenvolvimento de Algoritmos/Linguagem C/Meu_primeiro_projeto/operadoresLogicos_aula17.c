#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int operadoresLogicos()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 10; // ATRIBUIÇÃO =

    if(5==5) // COMPARAÇÃO ==   != COMPARAÇÃO NEGATIVA
    {


    }else{


    }

    printf("\n\t\n%i", i!=1); // IMPRIMINDO VALOR DE UMA CONDIÇÃO
    printf("\n\t\n%i", !(i==1));

    //! é um sinal de negação, igual a expressão NOT.



    printf ("Digite um número != de 5\n");
    scanf ("%i", &i);

    if( i!=5 )
    {

        printf("A expressão é: \n");
        printf("TRUE");
    }else{

        printf("A expressão é: \n");
        printf("FALSE");

    }

    return 0;
}
