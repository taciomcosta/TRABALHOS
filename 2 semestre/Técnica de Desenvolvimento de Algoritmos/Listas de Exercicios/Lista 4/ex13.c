#include <stdio.h>

main()
{
    printf("\n\n");

    //vars
    int v[10], i, j, cont=0;

    //Entrada
    for( i=0; i<10; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    //Processamento e Saída
    printf("\nValores Iguais:\n\n");
    for( i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if( v[i] == v[j] )
            {
                printf("%d  ", v[i]);
                cont++;
            }

        }

    }

    if( cont == 0 )
        printf("Nao ha valores iguais no vetor");

}
