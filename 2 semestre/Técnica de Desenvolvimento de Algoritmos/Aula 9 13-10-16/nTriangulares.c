#include <stdio.h>

main()
{
    printf("N Primeiros Numeros Triangulares\n\n");

    //vars
    int num, aux, soma, cont=0, n=6;

    //Entrada
    printf("Insira a quantidade de numeros triangulares: ");
    scanf("%d",&num);

    while(cont < num)
    {
        aux = 1;
        soma = aux * (aux+1) * (aux+2);
        while( soma < n )
        {
            soma = aux * (aux+1) * (aux+2);
            aux++;
        }
        if( soma == n )
        {
            printf("%d\n", n);
            cont++;
        }
        n++;
    }
}
