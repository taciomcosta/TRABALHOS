/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reverse(char *s){

    size_t len = strlen(s); //size_t is a type of integer that stores the things sizes

    char *t = s + len - 1;

    while( t >= s ){

        printf("%c",*t);
        t--;
    }
    puts("");
}

int main(){

char name[10];
fgets(name,sizeof(name),stdin);

print_reverse(name);
}

*/
