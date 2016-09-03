#include <stdio.h>
#include <math.h>
// Compilar com o arg -lm no final 

int main(){

	float a,b,c,d,x1,x2;

	printf("Digite o valor de A: ");
	scanf("%f",&a);

	printf("Digite o valor de B: ");
	scanf("%f",&b);

	printf("Digite o valor de C: ");
	scanf("%f",&c);

	d = pow(b,2) - 4 * a * c;

	x1 = (-b - sqrt(d))/(2*a);
	x2 = (-b + sqrt(d))/(2*a);

	printf("Equação: %.0fx² %s %.0fx + %.0f = 0\nx1 = %.1f\nx2 = %.1f\n", a , b < 0 ? "-":"+", -b , c, x1, x2);
}