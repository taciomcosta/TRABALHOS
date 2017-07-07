#include <stdio.h>

int elevar(int x, int z);

main()
{
    /* vars */
    int base, expoente, numElevado;

    printf("X^z\n\n");

    /* Entradas */
    printf("Digite a base: ");
    scanf("%i", &base);

    printf("Digite o expoente: ");
    scanf("%i", &expoente);

    /* Processamento */
    numElevado = elevar(base, expoente);

    /* Saída */
    printf("\n%i ^ %i = %i\n", base, expoente, numElevado);
}

int elevar(int x, int z)
{
    int i,
        res = 1;

    for (i = 0; i < z; i++) {
        res *= x;
    }

    return res;
}
