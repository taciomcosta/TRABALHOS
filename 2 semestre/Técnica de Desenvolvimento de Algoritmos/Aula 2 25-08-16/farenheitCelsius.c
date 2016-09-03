#include <stdio.h>

main(){
	
	
	printf("\t\t\tFarenheit ==> Celsius\n\n");
	
	//vars
	int f,c;
	
	//Entrada
	printf("Digite a temperatura em Farenheit: ");
	scanf("%f",&f);
	
	//Processamento
	c = (f-32) * 5 / 9;
	
	//Saída
	printf("Temperatura em Celsius: %.1f", c);
	
}
