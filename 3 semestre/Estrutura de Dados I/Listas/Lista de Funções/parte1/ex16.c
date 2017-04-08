#include <stdio.h>

void lerDados();

main()
{
    printf("PESQUISA DE UM CIDADE\n\n");

    lerDados();
}

void lerDados()
{
    /* vars */
    int filhos,
        contFilhos = 0,
        totalFilhos = 0;
    float salario, maiorSalario,
        contSalario = 0,
        menor350 = 0,
        totalSalario = 0;

    printf("Salario: R$");
    scanf("%f", &salario);
    printf("Filhos (numero negativo para terminar): ");
    scanf("%i", &filhos);

    maiorSalario = salario;

    while (filhos >= 0) {

        contFilhos++;
        contSalario++;

        totalSalario += salario;
        totalFilhos += filhos;

        if (salario < 350)
            menor350++;

        if (salario > maiorSalario)
            maiorSalario = salario;

        printf("Salario: R$");
        scanf("%f", &salario);
        printf("Filhos (numero negativo para terminar): ");
        scanf("%i", &filhos);
    }

    printf("\nMedia salarial: R$ %.2f", totalSalario / contSalario);
    printf("\nMedia de filhos: %i", totalFilhos / contFilhos);
    printf("\nMaior salario: R$ %.2f", maiorSalario);
    printf("\nPessoas com salario maior que R$350,00: %.1f%%\n", menor350*100/contSalario);
}
