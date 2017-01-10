#include <stdio.h>

main()
{
    printf("Menor altura, maior altura e media de altura dos meninos\n\n");

    //vars
    float altura, menorAltura, mediaAlturaMeninos, maiorAltura;
    int sexo, sexoMaiorAltura, i, contMeninos=0;

    //Entrada
    printf("Digite a altura da 1o crianca: ");
    scanf("%f",&altura);

    printf("\n1 - Masculino\n");
    printf("2 - Feminino\n");
    printf("Digite o numero do sexo da crianca: ");
    scanf("%i", &sexo);


    //Processamento
    menorAltura = altura;
    maiorAltura = altura;

    sexoMaiorAltura = sexo;

    //Se for menino
    if( sexo == 1 )
    {
        mediaAlturaMeninos += altura;
        contMeninos++;
    }



    for(i=2; i<= 30; i++)
    {
        //Entradas
        system("cls");

        printf("Digite a altura da %io crianca: ", i);
        scanf("%f",&altura);

        printf("\n1 - Masculino\n");
        printf("2 - Feminino\n");
        printf("Digite o numero do sexo da crianca: ");
        scanf("%i", &sexo);


        //Processamento

        //Se for a menor altura
        if( altura < menorAltura )
            menorAltura = altura;
        else if( altura > maiorAltura )
        {
            maiorAltura = altura;
            sexoMaiorAltura = sexo;
        }

        //Se for menino
        if( sexo == 1 )
        {
            mediaAlturaMeninos += altura;
            contMeninos++;
        }
    }

    //Saída

    //a
    printf("\n\na) Menor altura: %.2f\n", menorAltura);

    //b
    if(contMeninos !=)
    {
        mediaAlturaMeninos /= contMeninos;
        printf("b) Media da altura dos meninos: %.2f\n", mediaAlturaMeninos);
    }
    else
        printf("b) Media da altura dos meninos: Nao ha meninos");

    //c
    if( sexoMaiorAltura == 1)
        printf("c) Mais alta da turma(menino): %.2f", maiorAltura);
    else
        printf("c) Mais alta da turma(menina): %.2f", maiorAltura);

}
