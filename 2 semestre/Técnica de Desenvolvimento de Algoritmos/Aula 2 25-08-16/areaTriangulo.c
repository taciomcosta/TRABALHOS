#include <stdio.h>
#include <math.h>

main()
{
	
	//vars
	float sp,l1,l2,l3,a;//sp = semi-per�metro; a = �rea; l1 = lado 1
	
	printf("\t\t\t�rea de um tri�ngulo qualquer\n\n");
	
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
	
	//Sa�da
	printf("\t\t\t�rea de um tri�ngulo qualuqer\n\n");
	system("cls");
	printf("Volume = %.2f",a);
	
}
