#include <stdio.h>

main()
{
    printf("Lendo os indices de um vetor\n\n");

    //vars
    int v[9], i=0, cont=0;

    //Entrada
    while( cont < 9)
    {
        printf("Digite v[%d] ( < 9 ): ", i);
        scanf("%d", &v[i]);

        //Processamento
        i = v[i];
        cont++;
    }

    //Saída
    printf("\nVetor Resultante: \n0  ");
    for( i=0; i<9; i++)
    {
        if( v[i] != 9)
            printf("%d  ", v[i]);
    }

}
