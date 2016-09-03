/*
	Crie um programa em C que leia as 3 notas de um aluno e calcule a média das notas
*/

/*
	n° de casas decimais: printf("%.nf",&var); n = n° de casas
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
	
	//Saída
	printf("\n\n Media = %.2f", media); // exibe apenas 2 casas decimais
	//system("pause") ou getch(); ==> para o .exe não fechar
	
}
