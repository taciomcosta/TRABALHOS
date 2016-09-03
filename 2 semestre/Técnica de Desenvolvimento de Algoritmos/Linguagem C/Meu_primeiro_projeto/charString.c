#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int charString(){
    /* == DIFERENÇAS ENTRE CHAR E STRING ==
        --char

            char c;
            scanf("%c",c); ou c = getchar();
        --string

            char s[5]; <- |J|o|ã|o|\o| ou
             char s[4] = {"Ana"]; ou
             char s[4] = {'A','n','a'}
            scanf("%s",s);
            gets(s);
            printf("%s",s); ou puts(s); <- só uma string

            --manipulação de string
                #include <string.h>
                -copiando uma string para outra: strcpy(destino,origem);
                -contatenando duas strings: strcat(destino,origem);
                -tamanho da string: strlen(string);
                -comparando duas string(0 se forem iguais): strcmp(strng1,string2);

    */
}
