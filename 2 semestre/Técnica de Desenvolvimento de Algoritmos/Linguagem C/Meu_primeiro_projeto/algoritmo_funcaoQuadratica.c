#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

funcaoQuadratica (){

setlocale(LC_ALL,"Portuguese");

int a,b,c = 0;
int delta=0;
float x1,x2=0;


printf("Algoritmo - Estudo do sinal da função quadrática\n\n");
//ENTRADA
printf("Digite o valor do coeficiente a: ");
scanf("%d", &a);
printf("Digite o valor do coeficiente b: ");
scanf("%d", &b);
printf("Digite o valor do coeficiente c: ");
scanf("%d", &c);

//PROCESSAMENTO
delta = (b*b);
x1 = (-(b) - (sqrt(delta)))/(2*a);
x2 = (-b + sqrt(delta))/2*a;


//SAÍDA
printf("%d ", delta);
}
