#include <stdio.h>

void calcularTempo(int tempo);

main()
{
	//vars
	int segundos;
	
	printf("HORAS, MINUTOS E SEGUNDOS\n");
	
	printf("Insira o tempo em segundos: ");
	scanf("%d", &segundos);
	
	calcularTempo(segundos);
}

void calcularTempo(int tempo)
{
	//vars
	int horas, minutos, seg;
	
	horas = tempo / 3600;
	minutos = (tempo % 3600) / 60;
	seg = ((tempo % 3600) % 60);
	
	printf("\nTEMPO: %dh %dmin %ds\n", horas, minutos, seg);
}
