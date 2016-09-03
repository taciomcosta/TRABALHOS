#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

conversorBinario (){

setlocale(LC_ALL,"Portuguese");

char aa,bb,cc,dd,ee,ff,gg,hh;

printf("Algoritmo - conversor Binário -> Decimal\n\n");


//ENTRADA
printf("Digite o número em binário até 8 dígites.Complete com zero se for menor que 8 dígitos: \n");
scanf("%c%c%c%c%c%c%c%c", &aa, &bb, &cc, &dd, &ee, &ff, &gg, &hh);

//PROCESSAMENTO
int a = aa - 48;
int b = bb - 48;
int c = cc - 48;
int d = dd - 48;
int e = ee - 48;
int f = ff - 48;
int g = gg - 48;
int h = hh - 48;

int res = a*128 + b*64 + c*32 + d*16 + e*8 + f*4 + g*2 + h*1;


//SAÍDA
printf("%d", res);
}
