#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mfgfain()
{
    setlocale(LC_ALL, "Portuguese");

    int a1,a2,a3,b1,b2,b3,res = 0;

    printf("\t\t\t\tAlgoritmo de Conjuntos\n\n");

    //ENTRADAS
    printf ("\nDigite o 1� valor do conjunto A: ");
    scanf("%i", &a1);

    printf("\nDigite o 2� valor do conjunto A: ");
    scanf("%i", &a2);

    printf("\nDigite o 3� valor do conjunto A: ");
    scanf("%i", &a3);

    printf ("\nDigite o 1� valor do conjunto B: ");
    scanf("%i", &b1);

    printf("\nDigite o 2� valor do conjunto B: ");
    scanf("%i", &b2);

    printf("\nDigite o 3� valor do conjunto B: ");
    scanf("%i", &b3);

    printf("\n \n1.Reuni�o");
    printf ("\n2.Intersec��o");
    printf("\n \nDigite o n�mero da opera��o que deseja fazer: ");
    scanf("%i",&res);

    //PROCESSAMENTO

    //REUNI�O

    if(res==1)
    {
        printf("\n \n--------------------- Reuni�o ---------------------");
        printf ("\n A U B = { ");

        if ((a1==b1) || (a1==b2) || (a1==b3) ){

        printf("%i,", a1);

        }else{

        printf("%i,", a1);

        }


        if ((a2==b1)||(a2==b2)||(a2==b3)){

            printf("%i,", a2);

        }else{

            printf("%i,", a2);

        }


        if((a3==b1)||(a3==b2)||(a3==b3)){

        printf("%i,", a3);

        }else{

        printf("%i,", a3);

        }

        printf(" }");


    }


    //INTERSEC��O

    if(res==2){

        printf("--------------------- Interse��o ---------------------");

        printf("\n\nA intersec��o B = { ");

        //a1
        if((a1==b1) && (a1!=b2) && (a1!=b3)){

            printf("%i,", a1);
        }

        if((a1!=b1) && (a1==b2) && (a1!=b3)){

            printf("%i,", a1);
        }

        if((a1!=b1) && (a1!=b2) && (a1==b3)){

            printf("%i,", a1);
        }

        if((a1==b1) && (a1==b2) && (a1==b3) && (a1!=a2) && (a1!=a3)){

            printf("%i", a1);
        }

        //a2
        if((a2==b1) && (a2!=b2) && (a2!=b3)){

            printf("%i,", a2);
        }

        if((a2!=b1) && (a2==b2) && (a2!=b3)){

            printf("%i,", a2);
        }

        if((a2!=b1) && (a2!=b2) && (a2==b3)){

            printf("%i,", a2);
        }


        if((a2==b1) && (a2==b2) && (a2==b3) && (a2!=a1) && (a2!=a3)){

            printf("%i", a2);
        }

        //a3
        if((a3==b1) && (a3!=b2) && (a3!=b3)){

            printf("%i,", a3);
        }

        if((a3!=b1) && (a3==b2) && (a3!=b3)){

            printf("%i,", a3);
        }

        if((a3!=b1) && (a3!=b2) && (a3==b3)){

            printf("%i,", a3);
        }


        if((a3==b1) && (a3==b2) && (a3==b3) && (a3!=a2) && (a3!=a1)){

            printf("%i", a3);
        }

        printf(" }");


    }




    return 0;
}
