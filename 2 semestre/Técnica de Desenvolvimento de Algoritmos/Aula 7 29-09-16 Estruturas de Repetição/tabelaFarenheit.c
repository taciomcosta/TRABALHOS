#include <stdio.h>

main()
{
	printf("Tabela de Farenheit\n\n");
	
	//vars
	float ti, tf, aux, celsius;
	
	//Entrada
	printf("Insira a temperatura inicial em Farenheit: ");
	scanf("%f",&ti);
	
	printf("Insira a temperatura finalem Farenheit: ");
	scanf("%f",&tf);
	
	//Processamento
	//Se a temperatura inicial for maior que a final
	if ( tf < ti )
	{
		aux = ti;
		ti = tf;
		tf = aux;
	}
	
	//Limpatela
	system("cls");
	
	for (  ; ti<=tf; ti++ )
	{
		celsius = ( ti - 32 ) * 5 / 9;
		printf("%.1f oF --> %.1f oF\n", ti, celsius);
	}
	
}
