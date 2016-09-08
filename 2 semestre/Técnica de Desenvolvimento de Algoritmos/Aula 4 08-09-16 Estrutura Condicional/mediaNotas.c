#include <stdio.h>

main()
{
	//vars
	float n1, n2, n3, n4, media;
	
	printf("\t\t\tMedia das Notas\n\n");
	
	//Entradas
	printf("Insira a 1a nota: ");
	scanf("%f",&n1);
	
	printf("Insira a 2a nota: ");
	scanf("%f",&n2);
	
	printf("Insira a 3a nota: ");
	scanf("%f",&n3);
	
	printf("Insira a 4a nota: ");
	scanf("%f",&n4);
	
	//Processamento
	media = ( n1 + n2 + n3 + n4 ) / 4;
	
	//Saída
	if ( media >= 6 )
	
		printf("Aluno APROVADO. Media = %.1f", media);
		
	else //(média >= 6) é FALSA
	
		printf("Aluno REPROVADO. Media = %.1f", media);
	
}
