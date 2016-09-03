#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char c[9];
char j1,j2,jx;
int win = 0;
int impressao(){
    printf("====== TIP-TOE GAME ======\n\n");
    printf("\n_%c_|",c[0]);
    printf("_%c_|",c[1]);
    printf("_%c_\n",c[2]);
    printf("_%c_|",c[3]);
    printf("_%c_|",c[4]);
    printf("_%c_\n",c[5]);
    printf("_%c_|",c[6]);
    printf("_%c_|",c[7]);
    printf("_%c_\n",c[8]);
}

int jog1(){
    switch(j1){
        case '1':
            c[0] = 'X';
        break;
        case '2':
            c[1] = 'X';
        break;
        case '3':
            c[2] = 'X';
        break;
        case '4':
            c[3] = 'X';
        break;
        case '5':
            c[4] = 'X';
        break;
        case '6':
            c[5] = 'X';
        break;
        case '7':
            c[6] = 'X';
        break;
        case '8':
            c[7] = 'X';
        break;
        case '9':
            c[8] = 'X';
        break;
    }
}
int jog2(){
switch(j2){
        case '1':
            c[0] = 'O';
        break;
        case '2':
            c[1] = 'O';
        break;
        case '3':
            c[2] = 'O';
        break;
        case '4':
            c[3] = 'O';
        break;
        case '5':
            c[4] = 'O';
        break;
        case '6':
            c[5] = 'O';
        break;
        case '7':
            c[6] = 'O';
        break;
        case '8':
            c[7] = 'O';
        break;
        case '9':
            c[8] = 'O';
      }
}
int youWin(){

    if((((c[0]==c[1]) && (c[1]==c[2])) || ((c[3]==c[4]) && (c[4]==c[5])) || ((c[6]==c[7]) && (c[7]==c[8])) ||
    ((c[0]==c[3]) && (c[6]==c[3])) || ((c[1]==c[4]) && (c[4]==c[7])) || ((c[2]==c[5]) && (c[5]==c[8])) ||
    ((c[0]==c[4]) && (c[4]==c[8])) || ((c[2]==c[4]) && (c[4]==c[6])) ))
    {
        if(win==1){
                puts("\n\n Player 1, you win!");
                exit(0);
        }else{
            if(win==2){
                puts("\n\n Player 2, you win!");
                exit(0);
            }
        }
    }

}


int main(){

    c[0] = '1';
    c[1] = '2';
    c[2] = '3';
    c[3] = '4';
    c[4] = '5';
    c[5] = '6';
    c[6] = '7';
    c[7] = '8';
    c[8] = '9';


    while((!((c[0]==c[1]) && (c[1]==c[2])) || ((c[3]==c[4]) && (c[4]==c[5])) || ((c[6]==c[7]) && (c[7]==c[8])) ||
           ((c[0]==c[3]) && (c[6]==c[3])) || ((c[1]==c[4]) && (c[4]==c[7])) || ((c[2]==c[5]) && (c[5]==c[8])) ||
           ((c[0]==c[4]) && (c[4]==c[8])) || ((c[2]==c[4]) && (c[4]==c[6])) )){
        system("cls");
        impressao();
        printf("Player 1, choose a number: ");

        fflush(stdin);//LIMPA O 'ENTER' DO BUFFER
        win = 1; // VALIDADOR DO GANHADOR
        j1 = getchar();
        win = 2;
        jog1();
        youWin();



        system("cls");
        impressao();
        printf("Player 2, choose a number: ");

        fflush(stdin);//LIMPA O 'ENTER' DO BUFFER
        j2 = getchar();
        jog2();
        youWin();
    }
}

//VALIDAÇÃO PARA VER SE O NÚMERO JÁ FOI UTILIZADO (A TERMINAR)

   /* for(i=0;i<=8;i++){
        if((c[i]=='O') || c[i]=='X')){
            jx = j1;
            while(j1==jx){
                printf("Please, choose a different number\n");
                j1 = getchar();
            }
        }
     }*/

