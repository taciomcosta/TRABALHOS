/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char pesquisa[][50] = {
        "Tacio",//0
        "Tania",//1
        "Claudio",//2
        "etc"//3
    };
    char dunno[50];
    fgets(dunno,50,stdin);
    int i = 0,cont = 0;
    for(i = 0;i<=3;i++){
        if(strstr(dunno, pesquisa[i])){
                cont++;
            printf("%i registro encontrado\nPosicao: %i",cont,i);
        }
    }

    return 0;


}


*/
