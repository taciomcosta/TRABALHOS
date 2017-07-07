#include <stdio.h>
#include <string.h>

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

void calcularDados(struct dados info[])
{
        int maiorIdade = info[0].idade,
                contMulheres = 0,
                i;

        for (i = 0; i < T; i++) {
                /* maior idade */
                if (info[i].idade > maiorIdade) {
                        maiorIdade = info[i].idade;
                }

                /* mulheres entre 18 e 35, loiras de olhos verdes */
                if (info[i].sexo == 'F' &&
                    info[i].idade > 18 &&
                    info[i].idade <= 35 &&
                    strcmp(info[i].corOlhos, "verde") == 0 &&
                    strcmp(info[i].corCabelo, "loiro") == 0) {

                            contMulheres++;
                }
        }

        printf("\nMaior idade: %i\n", maiorIdade);
        printf("Mulheres entre 18 e 35 anos, loiras e de olhos verdes: %i\n", contMulheres);
}

main()
{
        /* vars */
        struct dados d[T];
        int j;

        printf("CALCULANDO DADOS DE UM REGISTRO\n\n");

        lerDados(d);

        /* impressão */
        printf("\n\n DADOS:\n");
        for (j = 0; j < T; j++) {
                printf("\nHABITANTE %i:\n", j+1);
                printf("Sexo: %c\n", d[j].sexo);
                printf("Olhos: %s\n", d[j].corOlhos);
                printf("Cabelo: %s\n", d[j].corCabelo);
                printf("Idade: %i\n", d[j].idade);
        }

        calcularDados(d);
}
