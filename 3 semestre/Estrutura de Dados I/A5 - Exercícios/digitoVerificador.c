#include <stdio.h>

int calcularVerificador(int n);

main()
{
	//vars
	int contaCorrente, digitoVerificador;
	
	printf("\nDIGITO VERIFICARDOR DA CONTA CORRENTE\n");
	
	printf("Digite a conta corrente: ");
	scanf("%d", &contaCorrente);
	
	digitoVerificador = calcularVerificador(contaCorrente);
	
	printf("\nDigito verificador: %d\n", digitoVerificador);
}

int calcularVerificador(int n)
{
	//vars
	int d1, d2, d3, inversoN, soma;
	
	//Separando os digitos
	d1 = n/100;
	d2 = (n % 100) / 10;
	d3 = (n % 100) % 10;
	
	//Invertendo
	inversoN = d3 * 100 + d2 * 10 + d1;
	
	soma = n + inversoN;
	
	d1 = soma / 100;
	d2 = (soma % 100) / 10;
	d3 = (soma % 100) % 10;
	
	soma = d1 * 1 + d2 * 2 + d3 * 3;
	
	return soma % 10;
}
