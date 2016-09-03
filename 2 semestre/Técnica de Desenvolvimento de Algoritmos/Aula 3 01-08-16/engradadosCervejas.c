//Algoritmo - Engradados para embalar cervejas
#include <stdio.h>

main()
{
	//vars
	int garrafas, engradados, nEmbaladas;
	
	printf("\t\t\tEngradados para embalar cervejas\n\n");
	
	//Entrada
	printf("Digite o num de garrafas cervejas: ");
	scanf("%i",&garrafas);
	
	//Processamento
	engradados = garrafas / 24;
	nEmbaladas = garrafas % 24;
	
	//Saída
	system("cls");//limpatela
	printf("Engradados : %i\n\n", engradados);
	printf("Cervejas nao embaladas: %i\n\n", nEmbaladas);
	
}
