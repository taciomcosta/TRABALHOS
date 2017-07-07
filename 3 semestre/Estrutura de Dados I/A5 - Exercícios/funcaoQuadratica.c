#include <stdio.h>
#include <math.h>

void calcularFuncaoQuadratica(float a, float b, float c);

main()
{
	//vars
	float n1, n2, n3;
	
	printf("\nEquacao do 2o grau: ");
	
	//Entrada
	printf("Insira o coeficiente A: ");
	scanf("%f", &n1);
	
	printf("Insira o coeficiente A: ");
	scanf("%f", &n2);
	
	printf("Insira o coeficiente A: ");
	scanf("%f", &n3);
	
	//Processamento e Saída
	calcularFuncaoQuadratica(n1, n2, n3);
}

void calcularFuncaoQuadratica(float a, float b, float c)
{
	//vars
	float delta, x1, x2;
	
	//delta
	delta = pow(b, 2) - 4 * a * c;
	
	//equacao
	if (delta < 0) {
		printf("\nNAO EXISTEM RAIZES REAIS");
	} else if (delta > 0){
		x1 = (- b - sqrt(delta)) / (2 * a);
		x2 = (- b + sqrt(delta)) / (2 * a);
		printf("\nx1 = %.2f\n", x1);
		printf("\nx2 = %.2f\n", x2);
	} else {
		x1 = (- b + sqrt(delta)) / (2 * a);
		printf("\nx1 = x2 = %.2f\n", x1);
	}
}
