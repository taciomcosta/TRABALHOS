#include <stdio.h>

double converterFahrenheit(double f);

main()
{
	//vars
	double fahrenheit, celsius;
	
	printf("FAHRENHEIT -> CELSIUS: sub-rotina\n");
	
	//Entrada
	printf("Insira a temperatura em oF: ");
	scanf("%lf", &fahrenheit);
	
	//Processamento
	celsius = converterFahrenheit(fahrenheit);
	
	//Saída
	printf("\nCelsius: %.2lf\n", celsius);
}

double converterFahrenheit(double f)
{
	return 5*(f-32) / 9;
}
