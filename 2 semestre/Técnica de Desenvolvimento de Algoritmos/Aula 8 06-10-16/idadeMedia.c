#include <stdio.h>
//	=>	NÃO SE ESQUEÇA NUNCA, NEVER, JAMÉ; DE INICIALIZAR OS CONTADORES!!!!	<=
main()
{
	printf("Idade Media\n\n");
	
	//vars
	//	=>	NÃO SE ESQUEÇA NUNCA, NEVER, JAMÉ; DE INICIALIZAR OS CONTADORES!!!!	<=
	int idade, sexo, i, iM = 0, iH = 0;//iM e iH são contadores
	float idGp, idM, idH;
	
	//Entrada
	for ( i=1; i<=7; i++ )
	{
		printf("1 - Mulher\n");
		printf("2 - Homem\n");
		printf("Pessoa %i, insira seu sexo: ",i);
		scanf("%i",&sexo);
		
		printf("Pessoa %i, insira sua idade: ",i);
		scanf("%d",&idade);
		
		//idade do grupo
		idGp += idade;
		
		//Se for mulher
		if ( sexo == 1 )
		{
			iM++;
			idM += idade;
		}
		else
		{
			iH++;	
			idH += idade;
		}
		
	}
	
	//Processamento e Saída
	
	//idade media do grupo
	system("cls");
	printf("\nIdade media do grupo: %.1f anos\n", idGp);
	
	//idade media das Mulheres
	if ( iM != 0 )
	{
		idM /= iM;
		printf("Idade media das mulheres: %.1f anos\n", idM);
	}
	else
		printf("Nao ha mulheres\n");
		
	//dos homens
	if( iH != 0 )
	{
		idH /= iH;
		printf("Idade media dos homens: %.1f anos\n", idH);
	}
	else
		printf("Nao ha homens\n");
	
	idGp /= 7;
	

	
}
//	=>	NÃO SE ESQUEÇA NUNCA, NEVER, JAMÉ; DE INICIALIZAR OS CONTADORES!!!!	<=
