//Escreva um algoritmo, que leia um v[10], mostre a soma dos elementos, o menor e sua posição,
//o maior e sua posição
#include <stdio.h>

main()
{
	printf("Soma dos elementos de um vetor, maior e menor elemento\n\n");

	//vars
	int v[10], i=0, menor, pMenor, maior, pMaior, soma=0;

	//Entradas
	printf("Digite v[%d]: ", i);
	scanf("%d", &v[i]);

	menor = v[i];
	maior = v[i];
	pMenor = i;
	pMaior = i;
	soma += v[i];

	for( i=1; i<10; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);

        //Processamento
        if( v[i] < menor)
        {
            menor = v[i];
            pMenor = i;
        }
        else if( v[i] > maior)
        {
            maior = v[i];
            pMaior = i;
        }
        soma += v[i];
    }

    //Saída
    printf("\n\n-Menor numero: %d", menor);
    printf("\n-Posicao do menor numero: %d", pMenor);
    printf("\n-Maior numero: %d", maior);
    printf("\n-Posicao do maior numero: %d", pMaior);
    printf("\nSoma dos elementos: %d\n", soma);



}
