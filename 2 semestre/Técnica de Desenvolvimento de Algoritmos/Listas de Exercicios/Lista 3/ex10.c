#include <stdio.h>

main()
{
    printf("Numero de dias entre duas datas (1950-1996)\n\n");

    //vars
    int d1, m1, a1, d2, m2, a2, aux1, aux2, aux3, aI, totalD1=0, totalD2=0, totalDias=0;

    //Entrada
    printf("Insira o ano da 1o data: ");
    scanf("%d", &a1);

    printf("Insira o mes da 1o data: ");
    scanf("%d", &m1);

    printf("Insira o dia da 1o data: ");
    scanf("%d", &d1);

    system("cls");

    printf("Insira o ano da 2o data: ");
    scanf("%d",&a2);

    printf("Insira o mes da 2o data: ");
    scanf("%d", &m2);

    printf("Insira o dia da 2o data: ");
    scanf("%i", &d2);

    //Processamento

    //Trocando as datas, se necessário
    if(a1 > a2)
    {
        aux1 = a2;
        aux2 = m2;
        aux3 = d2;
        a2 = a1;
        m2 = m1;
        d2 = d1;
        a1 = aux1;
        m1 = aux2;
        d1 = aux3;
    }
    aI = a1;

    if(a1!=a2)
    {
        if(m1 != 1)
            m1--;
        //Quantidade de dias para terminar o ano da data inicial
        totalD1 = 365 - (m1*30 + d1);
        //Quantidade de dias passados do inicio do ano da data final
        totalD2 = ((m2-1)*30 + d2);
        a1++;
    }
    else
    {
        if(m2-1-m1 == 0)
            m2++;
        totalD2 = (m2-1-m1)*30 + (d2-d1);
    }

    totalDias = totalD1 + totalD2;

    while (a1 < a2)
    {
        if((1952-a1)%4 == 0 || a2==1952)
        {
            totalDias += 366;
        }
        else
        {
            totalDias += 365;
        }

        a1++;

    }
    //Retornando a1 ao seu valor principal
    a1 = aI;


    //Saída
    printf("\nData Inicial: %i/%i/%i\n",d1, m1, aI);
    printf("Data Final: %d/%d/%d\n", d2, m2, a2);
    printf("Total de dias: %d", totalDias);



}
