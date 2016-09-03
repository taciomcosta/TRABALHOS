#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int treino(){
    //VARS
        int n1,n2,i,x;

    //ENTRADA
        setlocale(LC_ALL,"Portuguese");
        printf("Série de Ricci\n\n");
        printf("Digite o 1° termo: ");
        scanf("%i",n1);
        printf("Digite o 2° termo: ");
        scanf("%i",n2);
    //SAÍDA
        system("cls");
        printf("%i\n%i\n",n1,n2);
        for(i=3;i<=10;i++){
            x = n1+n2;
            printf("%i\n",x);
            n1 = n2;
            n2 = x;
        }
    return 0;
}



