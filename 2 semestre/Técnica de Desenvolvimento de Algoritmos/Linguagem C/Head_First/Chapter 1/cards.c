//Program to evaluate face values
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name); // '%2s' just reads 2 chars of what the user type.

    int val = 0;
    if (card_name[0] == 'K'){
        val = 10;
    }else{
        if (card_name[0] == 'Q'){
            val = 10;
        }else{
            if (card_name[0] == 'A'){
                val = 11;
            }else{
                val = atoi(card_name);
            }
        }
    }

    printf("The card value is %i\n", val);

    if ( ( val > 2 ) && ( val < 7 ))
            puts("The counter has gone up!");

    if ( val > 10 )
            puts("The counter has gone down!");

    return 0;
}
*/
