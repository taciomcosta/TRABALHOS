//Algoritmo - Tempo em horas, minutos e segundos
#include <stdio.h>

main()
{
	
	//vars
	int tempo,h,m,s;
	
	printf("\t\t\tSegundos expressos em horas, minutos, segundos\n\n");
	
	//Entrada
	printf("Insira o tempo em segundos: ");
	scanf("%d",&tempo);
	
	//Processamento
	h = tempo / 3600; //1 hora = 3600s
	m = (tempo % 3600) / 60; //1 minuto = 60s
	s = (tempo % 3600) % 60;
	
	//Saída
	system("cls");
	printf("Tempo: %ih %imin. %is", h, m, s);
	
}
