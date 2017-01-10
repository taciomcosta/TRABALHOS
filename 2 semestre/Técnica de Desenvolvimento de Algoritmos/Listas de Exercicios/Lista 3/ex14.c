#include <stdio.h>

main()
{
    printf("N Primeiros Pares e Impares\n\n");

    //vars
    int n,cont=0, i=0;

    //Entrada
    printf("Insira a quantidade de pares e impares: ");
    scanf("%d", &n);

    printf("%d primeiros pares: \n",n);
    while(cont != n)
    {
        if(i%2 == 0)
        {
            printf("%d\n", i);
            cont++;
        }
        i++;
    }


    i = 1;
    cont=0;
    printf("\n%d primeiros impares: \n",n);
    while(cont != n)
    {
        if(i%2 == 1)
        {
            printf("%d\n", i);
            cont++;
        }
        i++;
    }

}
