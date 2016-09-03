#include <stdio.h>
#include <math.h>

main()
{
	
	//vars
	float sp,l1,l2,l3,a;//sp = semi-perímetro; a = área; l1 = lado 1
	
	printf("\t\t\tÁrea de um triângulo qualquer\n\n");
	
	//Entrada
	printf("Digite o 1o lado do triangulo: ");
	scanf("%f",&l1);
	
	printf("Digite o 1o lado do triangulo: ");
	scanf("%f",&l2);
	
	printf("Digite o 1o lado do triangulo: ");
	scanf("%f",&l3);
	
	//Processamento
	sp = ( l1 + l2 + l3 ) / 2;
	a = sqrt( sp * (sp-l1) * (sp-l2) * (sp-l3) );
	
	//Saída
	printf("\t\t\tÁrea de um triângulo qualuqer\n\n");
	system("cls");
	printf("Volume = %.2f",a);
	
}
