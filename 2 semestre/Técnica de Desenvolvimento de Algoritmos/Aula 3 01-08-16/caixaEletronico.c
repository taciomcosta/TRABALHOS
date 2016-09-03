/*
Crie um programa em C que leia um saque num caixa eletrônico, em reais:(Saque até 1000 reais)
Calcule e mostre quantas notas ele vai dar ao usuário
ex: saque = 999 reais
9 notas de 100
1 nota de 50
2 notas de 20
1 nota de 5
2 notas de 2
*/

#include <stdio.h>

main()
{
	//vars
	int s, n100, n50, n20, n10, n5, n2, m1;

	printf("\t\t\tSaque Caixa-Eletrônico\n\n");

	//Entrada
	printf("Insira um valor de saque ate RS 1000,00: ");
	scanf("%d",&s);

	//Processamento
	n100 = s / 100;
	n50 = (s%100) / 50;
	n20 = ((s%100)%50) / 20;
	n10 = (((s%100)%50)%20) / 10;
	n5 = ((((s%100)%50)%20)%10) / 5;
	n2 = (((((s%100)%50)%20)%10)%5) / 2;
	m1 = (((((s%100)%50)%20)%10)%5) % 2;


	//Saída
	printf("Saque = %i\n\n",s);
	printf("%d nota(s) de 100\n",n100);
	printf("%d nota(s) de 50\n",n50);
	printf("%d nota(s) de 20\n",n20);
	printf("%d nota(s) de 10\n",n10);
	printf("%d nota(s) de 5\n",n5);
	printf("%d nota(s) de 2\n",n2);
	printf("%d moeda de 1\n",m1);


}
