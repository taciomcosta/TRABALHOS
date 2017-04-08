#include <stdio.h>

void ordenarCrescente(int a, int b, int c);

main()
{
    /* vars */
    int n1, n2, n3;

    printf("VALORES ORDENADOS CRESCENTEMENTE\n\n");

    /* Entrada */
    printf("Digite o 1o numero: ");
    scanf("%i", &n1);

    printf("Digite o 2o numero: ");
    scanf("%i", &n2);

    printf("Digite o 3o numero: ");
    scanf("%i", &n3);

    /* Processamento e Saída*/
    printf("Valores ordenados: ");
    ordenarCrescente(n1, n2, n3);
}

void ordenarCrescente(int a, int b, int c)
{
    if (a <= b && a <= c) {
        if (b <= c) {
            printf("%d %d %d\n", a, b, c);
        } else {
            printf("%d %d %d\n", a, c, b);
        }
    } else if (b < a && b < c) {
        if (a < c) {
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    } else {
        if (a < b) {
            printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", c, b, a);

        }
    }
}
