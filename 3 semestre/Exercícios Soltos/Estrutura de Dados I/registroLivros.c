#include <stdio.h>
#include <string.h>

struct livros {
        char titulo[30];
        int ano;
        int numeroPaginas;
        float preco;
};

int main(void)
{
        struct livros liv[5];
        float mediaPreco = 0;

        printf("MEDIA DE PAGINAS DE 5 LIVROS\n\n");

        /* Entrada */
        for (int i = 0; i < 5; i++) {
                printf("\nLivro %i:\n", i + 1);

                printf("Titulo: ");
                /* sempre limpar o buffer antes de ler uma string */
                __fpurge(stdin); //Para Windows: fflush(stdin);
                scanf("%s", &liv[i].titulo);

                printf("Ano: ");
                scanf("%i", &liv[i].ano);

                printf("Numero de paginas: ");
                scanf("%i", &liv[i].numeroPaginas);

                printf("Preco: ");
                scanf("%f", &liv[i].preco);

                mediaPreco += liv[i].preco;
        }

        mediaPreco /= 5;

        /* Saída */
        system("clear"); // Para Windows: system("cls")
        printf("\nLIVROS:\n");
        for (int i = 0; i < 5; i++) {
                printf("\nTitulo: %s\n", liv[i].titulo);
                printf("Ano: %i\n", liv[i].ano);
                printf("Numero de paginas: %i\n", liv[i].numeroPaginas);
                printf("Preco: %.2f\n", liv[i].preco);
        }

        printf("MEDIA DE PRECO: %.2f", mediaPreco);

        return 0;
}
