/*
* This algortithm gives the longitude and latitude for helping pirates to go to southeast.
*/
/*
#include <stdio.h>
#include <stdlib.h>

void go_south_east(int *lat, int *lon){
    *lat = *lat -1; // não funciona assim: *lat--
    *lon = *lon + 1;
}

int main(){
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude, &longitude); // endereços da memória de latitude e longitude
    printf("Avast! Now at: [%i,%i]\n",latitude,longitude);

    return 0;
}
*//*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int contestants[] = {1, 2, 3};
    int *fortune = contestants;  contestants is passing the ADRESS of the first char.
    *fortune = 5;                every value change in *fortune, will change in contestants initial value and vice versa
    printf("%i\n",*fortune);
int i=0;
    for(i=0;i<3;i++){
        printf("%i",contestants[i]);}

    return 0;
}
*/
