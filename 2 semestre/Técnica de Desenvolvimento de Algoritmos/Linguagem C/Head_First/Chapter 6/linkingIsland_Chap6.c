/*#include <stdio.h>
#include <stdlib.h>

typedef struct island {  //you must give the structure name
  char *name;
  char *opens;
  char *closes;
  struct island *next;
} island;


void display(island *start)
{
    island *i = start;
    for (; i != NULL; i = i->next){
        printf("Name: %s open: %s-%s\n",i->name,i->opens,i->closes);
    }
}

int main(){

    //In C, NULL actually has the value 0, but it’s set aside specially to set pointers to 0.
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island skull = {"Skull", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};


    //and link them together to form a tour:
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;
    isla_nublar.next = &skull;
    skull.next = &shutter;


    //inserting data between data
    //you just need to create the data and change the addresses
    //island skull = {"Skull", "09:00", "17:00", NULL};
    //isla_nublar.next = &skull;
    //skull.next = &shutter;

    display(&amity);
    return 0;
}

*/
