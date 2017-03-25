#include <stdio.h>

main()
{
    printf("Troca dos 8 elementos finais pelos iniciais de um vetor\n\n");

    //vars
    int v[16], i, aux;

    //Entrada
    for( i=0; i<16; i++)
    {
        printf("Digite v[%i]: ", i);
        scanf("%d", &v[i]);
    }

    //Processamento
    for(i=0; i<8; i++)
    {
        aux = v[i];
        v[i] = v[i+8];
        v[i+8] = aux;
    }

    //Saída
    printf("Vetor Resultante: ");
    for( i=0; i<16; i++)
    {
        printf("%d  ", v[i]);
    }

}
