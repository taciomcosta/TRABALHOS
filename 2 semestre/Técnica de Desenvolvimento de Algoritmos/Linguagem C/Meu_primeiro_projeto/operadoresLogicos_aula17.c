#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int operadoresLogicos()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 10; // ATRIBUI��O =

    if(5==5) // COMPARA��O ==   != COMPARA��O NEGATIVA
    {


    }else{


    }

    printf("\n\t\n%i", i!=1); // IMPRIMINDO VALOR DE UMA CONDI��O
    printf("\n\t\n%i", !(i==1));

    //! � um sinal de nega��o, igual a express�o NOT.



    printf ("Digite um n�mero != de 5\n");
    scanf ("%i", &i);

    if( i!=5 )
    {

        printf("A express�o �: \n");
        printf("TRUE");
    }else{

        printf("A express�o �: \n");
        printf("FALSE");

    }

    return 0;
}
