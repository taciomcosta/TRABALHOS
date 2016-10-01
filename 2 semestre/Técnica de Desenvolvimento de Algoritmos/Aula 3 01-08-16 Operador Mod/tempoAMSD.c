#include <stdio.h>

main()
{
	//	vars
	int tempo,a,m,s,d;
	
	printf("\t\t\tTempo em Anos, Meses, Semanas, Dias\n\n");
	
	//Entrada
	printf("Insira o tempo em dias: ");
	scanf("%d",&tempo);
	
	//Processamento
	a = tempo / 365;
	m = (tempo % 365) / 30;
	s = ((tempo % 365) % 30) / 7;
	d = ((tempo % 365) % 30) % 7;
	
	//Saída
	printf("Tempo : %d anos %d meses %i semanas %i dias", a, m, s, d);
	
	
	
}
