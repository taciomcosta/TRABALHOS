#include <stdio.h>
#include <math.h>

main()
{
	printf("Quadrado de 10 numeros\n\n");
	
	
	//vars
	float num,quadrado;
	int i = 1;
	
	//Faça o que está dentro 10x
	while ( i <= 10 )
	{
		//Entrada
		printf("Insira o %io. numero: ", i);
		scanf("%f",&num);
		
		//Processamento
		quadrado = pow(num, 2);
		
		//Saída
		printf("%.2f^2 = %.2f\n\n", num, quadrado);
		
		//Incremento
		i++;
	}
	
}
