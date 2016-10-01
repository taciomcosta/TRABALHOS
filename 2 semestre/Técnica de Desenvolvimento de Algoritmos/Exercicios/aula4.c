#include <stdio.h>

int main()
{
    // vars
    int n1,n2;

    printf("\t\t\tComparacao entre numeros\n\n");

    // Entradas
    printf("Insira o 1o numero: ");
    scanf("%i", &n1);

    printf("Insira o 2o numero: ");
    scanf("%d", &n2);

    if( n1 > n2 )
        printf("%d > %i\n", n1, n2);
    else if( n1 == n2 )
        printf("%d == %d\n", n1, n2);
    else if( n1 < n2 )
        printf("%i < %d\n", n1, n2);
        

}
