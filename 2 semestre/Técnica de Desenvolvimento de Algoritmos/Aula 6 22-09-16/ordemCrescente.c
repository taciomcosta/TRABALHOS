#include <stdio.h>

main()
{
	//	vars
	int n1, n2, n3;
	
	printf("\t\t\tNumeros em ordem crescente\n\n\n");
	
	//	Entradas
	printf("Insira o 1o numero: ");
	scanf("%d",&n1);
	
	printf("Insira o 2o numero: ");
	scanf("%i",&n2);
	
	printf("Insira o 3o numero: ");
	scanf("%i",&n3);
	printf("\nOrdem crescente: ");
	
	//Processamento
	if( n1<=n2 && n2<=n3)
	
		printf("%i, %d, %i", n1, n2, n3);
		
	if(n1<n2 && n2>n3)
	
		printf("%d, %i, %d", n1, n3, n2);
		
	if ( n1>n2 && n1<n3 )
	
		printf("%d, %i, %d", n2, n1, n3 );
	
	if ( n2<n3 && n3<n1 )
	
		printf("%d, %i, %i", n2, n3, n1 );
		
	if ( n3<n1 && n1<n2 )
	
		printf("%i, %i, %d", n3, n1, n2);
		
	else
	
		printf("%i, %i, %d", n3, n2, n1);
	
}
