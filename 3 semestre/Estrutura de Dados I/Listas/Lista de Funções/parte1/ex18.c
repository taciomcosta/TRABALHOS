#include <stdio.h>

int calcularFat(int n);

main()
{
    /* vars */
    int num, fat;

    printf("FATORIAL DE UM NUMERO\n\n");

    /* Entrada */
    printf("Digite um numero inteiro positivo: ");
    scanf("%i", &num);

    /* Processamento */
    fat = calcularFat(num);

    /* Saída */
    printf("%d! = %d\n", num, fat);
}

int calcularFat(int n)
{
    int i,
        f = 1;

    for (i = 1; i <= n; i++) {
        f *= i;
    }

    return f;
}
