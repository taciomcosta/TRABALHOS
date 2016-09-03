#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mediaNotas(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;
    n1 = n2 = n3 = n4 = media = 0;

    printf("==========Média Escolar 1.0==========\n\n");

    printf("Digite a sua primeira nota bimestral: ");
    scanf ("%f", &n1);

    printf("\nDigite a sua segunda nota bimestral: ");
    scanf ("%f", &n2);

    printf("\nDigite a sua terceira nota bimestral: ");
    scanf ("%f", &n3);

    printf("\nDigite a sua quarta nota bimestral: ");
    scanf ("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf ("\n \nA sua média escoalar foi de %f ", media);

    if(media >= 7)
    {

        printf("\n \nVocê foi aprovado!!\n");
    } else {

        printf("Você foi reprovado");
    }




    return 0;
}
