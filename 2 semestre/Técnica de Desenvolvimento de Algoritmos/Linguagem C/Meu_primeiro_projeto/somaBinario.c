#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

somaBinario (){

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
printf("%d\n\n", res);

//ENTRADA
char aa1, bb1, cc1, dd1, ee1, ff1, gg1, hh1;

printf("Digite o número em binário até 8 dígites.Complete com zero se for menor que 8 dígitos: \n");
scanf("%c%c%c%c%c%c%c%c", &aa1, &bb1, &cc1, &dd1, &ee1, &ff1, &gg1, &hh1);

//PROCESSAMENTO
int a1 = aa1 - 48;
int b1 = bb1 - 48;
int c1 = cc1 - 48;
int d1 = dd1 - 48;
int e1 = ee1 - 48;
int f1 = ff1 - 48;
int g1 = gg1 - 48;
int h1 = hh1 - 48;

int res1 = a1*128 + b1*64 + c1*32 + d1*16 + e1*8 + f1*4 + g1*2 + h1*1;


//SAÍDA
printf("%d", res1);
}
