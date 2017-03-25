#include <stdio.h>

main()
{
	int hI,mI, hF, mF, mIT, mFT, duracao, dH, dM;
	
	printf("\t\t\tDuracao de um programa de TV\n\n");
	
	printf("Insira as horas do inicio do programa: ");
	scanf("%i",&hI);
	
	printf("Insira os minutos do inicio do programa: ");
	scanf("%i",&mI);
	
	printf("Insira as horas do fim do programa: ");
	scanf("%i",&hF);
	
	printf("Insira os minutos do fim do programa: ");
	scanf("%i",&mF);
	
	
	
	//	Processamento
	
	//Se a hora final for menor que a inicial, então é adicionado 24h à hF
	if (hF < hI) 
		hF += 24;
	
	
	hI *= 60;
	hF *= 60;
	
	mIT = mI + hI;
	mFT = mF + hF;
	
	duracao = mFT - mIT;
	
	dH = duracao / 60;
	dM = duracao % 60;
	
	//Saída
	printf("\n\nDuracao: %ih %dmin", dH, dM);
	
}
