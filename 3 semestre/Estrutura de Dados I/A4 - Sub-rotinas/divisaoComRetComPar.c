// sub-rotina COM retorno e COM parâmetros

float dividir(float dividendo, float divisor);

main()
{
	//vars globais
	float n1, n2, res;
	
	printf("DIVISAO - SUB-ROTINA\n\n");
	
	printf("Insira n1: ");
	scanf("%f", &n1);
	
	printf("Insira n2: ");
	scanf("%f", &n2);
	
	res = dividir(n1, n2);
	
	printf("%.2f / %.2f = %.2f", n1, n2, res);
	
}

float dividir(float dividendo, float divisor)
{
	//vars locais
	float q;
	
	q = dividendo / divisor;
	
	return q; // return dividendo / divisor;
}
