#include <stdio.h>

int calcularNumDivisores(int n);

main()
{
    /* vars */
    int num, numDivisores;

    printf("NUMERO DE DIVISORES\n\n");

    /* Entrada */
    printf("Digite um numero: ");
    scanf("%i", &num);

    /* Processamento */
    numDivisores = calcularNumDivisores(num);

    /* Saída */
    printf("\nNumero de divisores: %i\n", numDivisores);

}

int calcularNumDivisores(int n)
{
    int i, cont = 0;

    for (i = 1; i <= n; i++) {
        if (n%i == 0)
            cont++;
    }

    return cont;
}
