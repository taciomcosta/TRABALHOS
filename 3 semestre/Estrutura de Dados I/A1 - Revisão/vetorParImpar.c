#include <stdio.h>

int main(void)
{
    int v[10], i,
        contP = 0,
        contI = 0;

    /* Lendo o vetor V e contando os pares e ímpares */
    for (i = 0; i < 10; i++) {
        printf("Digite v[%i]: ", i);
        scanf("%d", &v[i]);

        if (v[i]%2 == 0) {
            contP++;
        } else {
            contI++;
        }
    }

    /* Se tiver números pares */
    if (contP > 0) {
        int par[contP];
        contP = 0;
        for (i = 0; i < 10; i++) {
            if (v[i]%2 == 0) {
                par[contP] = v[i];
                contP++;
            }
        }
        printf("par: ");
        for (i = 0; i < contP; i++) {
            printf("%d ", par[i]);
        }
    } else {
        printf("\nNao ha numeros pares!\n");
    }

    /* Se tiver números ímpares */
    if (contI > 0) {
        int impar[contI];
        contI = 0;
        for (i = 0; i < 10; i++) {
            if (v[i]%2 == 1) {
                impar[contI] = v[i];
                contI++;
            }
        }
        printf("\nimpar: ");
        for (i = 0; i < contI; i++) {
            printf("%d ", impar[i]);
        }
    } else {
        printf("\nNao ha numeros impares!\n");
    }
    printf("\n");

    return 0;
}
