#include <stdio.h>
#include <string.h>

#define ISBITSET(x, i) (( x[i>>3] & (1<<(i&7)) ) != 0)//diz se o número já foi 'riscado' ou não
#define SETBIT(x, i) x[i>>3] |= (1<<(i&7)); 
#define CLEARBIT(x, i) x[i>>3] &= (1<<(i&7)) ^ 0xFF; //x[0] = 10101100

long long sumPrimes(int n) {
    char b[n/8+1];//250001
    long long i, p;
    long long s = 0;
memset(b, 255, sizeof(b)); //b,11111111,250001

    for (p=2; p<n; p++) {
        if (ISBITSET(b,p)) {
            //printf("%d\n", p);
            s += p;
            for (i=p*p; i<n; i+=p) {
                CLEARBIT(b, i); 
            }
        }
    }
    return s; 
}

int main(void) {

    printf("%lld\n", sumPrimes(2000000));
    return 0; 

}

/*  EXPLICAÇÃO

First off, those macros assume evilly that CHAR_BIT == 8, and i >> 3 is actually i / 8.
(So really this code should say i / CHAR_BIT.) This first expression computes the byte which
contains your desired bit, and is thus the array index in your array x (which should be an array of unsigned char!).

Now that we've selected the correct byte, namely x[i >> 3] (or x[i / CHAR_BIT] in your own, better code),
we have to do the bit-fiddling. Again, i & 7 really wants to be i % CHAR_BIT, and it extracts only the 
remainder of your bit count that gives you the offset within the byte.

*/
    