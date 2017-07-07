#include <stdio.h>

void lerValores();

main()
{
    printf("MAIOR EM 50 VALORES\n\n");

    lerValores();
}

void lerValores()
{
    int v[50], i = 0,
        maior;

    printf("Digite o %io valor: ", i+1);
    scanf("%i", &v[i]);

    maior = v[i];

    for (i = 1; i < 50; i++) {
        printf("Digite o %io valor: ", i+1);
        scanf("%i", &v[i]);

        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("\nMaior valor: %d", maior);
}
