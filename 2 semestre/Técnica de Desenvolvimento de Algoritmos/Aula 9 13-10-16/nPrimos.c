#include <stdio.h>
main()
{
	printf("N Numeros Primos\n\n");
	
	//vars
	int n,i, aux=1,contPrimo, contador =1, num;
	
	//Entrada
	printf("Insira a quantidade de primos: ");
	scanf("%d",&num);
		
	n=2;
	while(contador <= num)
	{
		contPrimo=0;
		for(i=1; i<=n; i++)
		{
			if(n%i == 0)
				contPrimo++;
		}
		
		if(contPrimo == 2)
		{
			printf("%d\n", n);
			contador++;
			n++;
		}
		else
		{
			n++;
		}
	}
}
