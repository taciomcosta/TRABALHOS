#include <stdio.h>

main()
{
    printf("Compactando um vetor\n\n");

    //vars
    int v[5], i, j;

    //Entrada
    for( i=0; i<5; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    //Processamento
    for(i=4; i>0; i--)
    {
        if(v[i-1] == 0)
        {
            for(j=i-1; j<4; j++)
            {
                v[j] = v[j+1];
                v[j+1] = 0;
            }
        }
    }

    //Saída
    printf("\nVetor Resultante: \n");
    for( i=0; i<5; i++)
    {
        printf("%d\n", v[i]);
    }
}
