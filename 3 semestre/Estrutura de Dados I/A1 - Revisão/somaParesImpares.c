/*
	SOMA DOS PARES E DOS �MPARES ENTRE DOIS N�MEROS, N1 E N2
*/

/*
	SOLU��O 2
	
	- n1 � par e n2 � par
	for(i = n1; i<=n2; i+=2)
		somaP += i;
	for(i = n1; i<=n2-1; i+=2)
		somaI += i;
		
	- n1 � par e n2 � �mpar
	for(i = n1; i<=n2-1; i+=2)
		somaP += i;
	for(i = n1+1; i<=n2; i+= 2)
		somaP += i;
		
	- n1 � �mpar e n2 � par
	for(i = n1+1; i<=n2; i+=2)
		somaP += i;
	for(i = n1; i<=n2-1; i+=2)
		somaP += i;
		
	-n1 � �mpar e n2 � �mpar
	for(i = n1; i<=n2; i+= 2)
		somaP += i;
	for(i = n1; i<=n2; i+= 2)
		somaP += i;


*/

#include <stdio.h>

main()
{
	//vars
	int n1, n2, i, aux,
		somaP = 0,
		somaI = 0;
		
	//Entrada
	printf("Digite n1: ");
	scanf("%d", &n1);
	printf("Digite n2: ");
	scanf("%i", &n2);
	
	//alg de troca
	if (n1 > n2) {
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	
	//Processamento
	for (i = n1; i <= n2; i++)
		if (i%2 == 0)
			somaP += i;
		else
			somaI += i;
	
	//Sa�da
	printf("\nSoma par: %i\n", somaP);
	printf("Soma impar: %i\n", somaI);
}
