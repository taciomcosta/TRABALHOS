#include <stdio.h>

#define T 3

struct dados {
        char sexo;
        char corOlhos[10];
        char corCabelo[10];
        int idade;
};

void lerDados(struct dados info[])
{
        int i;

        for (i = 0; i < T; i++) {
                printf("\nHabibtante %i\n", i+1);

                printf("Sexo (M/F): ");
                scanf(" %c", &info[i].sexo);

                printf("Cor dos olhos (verde/azul/castanho): ");
                scanf("%s", info[i].corOlhos);

                printf("Cor do cabelo (loiro/preto/ruivo): ");
                scanf("%s", info[i].corCabelo);

                printf("Idade: ");
                scanf("%i", &info[i].idade);
        }
}

main()
{
        /* vars */
        struct dados d[T];
        int j;

        printf("DADOS DE UMA POPULACAO\n\n");

        lerDados(d);


        printf("\n\n DADOS:\n");
        for (j = 0; j < T; j++) {
                printf("\nHABITANTE %i:\n", j+1);
                printf("Sexo: %c\n", d[j].sexo);
                printf("Olhos: %s\n", d[j].corOlhos);
                printf("Cabelo: %s\n", d[j].corCabelo);
                printf("Idade: %i\n", d[j].idade);
        }


}
