/*
	Crie um programa em C que leia as 3 notas de um aluno e calcule a m�dia das notas
*/

/*
	n� de casas decimais: printf("%.nf",&var); n = n� de casas
*/

#include <stdio.h>

main()
{
	
	float n1,n2,n3,media;
	
	printf("\t\t\tMedia de 3 notas de um aluno\n");
	
	//Entradas
	printf("Digite a 1o nota: ");
	scanf("%f",&n1);
	
	printf("Digite a 2o nota: ");
	scanf("%f",&n2);

	printf("Digite a 3o nota: ");
	scanf("%f",&n3);
	
	//Processamento
	media = (n1+n2+n3) / 3 ;
	
	//Sa�da
	printf("\n\n Media = %.2f", media); // exibe apenas 2 casas decimais
	//system("pause") ou getch(); ==> para o .exe n�o fechar
	
}
