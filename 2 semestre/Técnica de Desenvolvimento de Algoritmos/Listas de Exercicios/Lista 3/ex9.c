#include <stdio.h>

main()
{
    printf("N Termos da Sequencia de Fibonacci\n\n");

    //vars
    int n1=1,n2=1, aux, num, i;

    //Entrada
    printf("Insira a quantidade de termos: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%d,", n1);
        aux = n1;
        n1 = n2;
        n2 += aux;
    }


}
