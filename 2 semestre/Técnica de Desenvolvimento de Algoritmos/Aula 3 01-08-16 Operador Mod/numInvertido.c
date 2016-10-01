#include <stdio.h>

main()
{
	
	//vars
	int cdu,u,d,c,m;
	
	printf("\t\t\tCDU => UDC\n\n");
	
	//Entradas
	printf("Insira um num de 3 algarismos: ");
	scanf("%i",&cdu);
	
	//Processamento
	c = cdu / 100;
	d = (cdu % 100) / 10;
	u = (cdu % 100) % 10;
	
	m = u * 100 + d * 10 + c;
	
	//Saída
	printf("Num invertido: %d", m);
	
}
