#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare (const void* n1, const void* n2){
    char** a = (char**)n1;
    char** b = (char**)n2;
    return strcmp(*a,*b);
}

int main(){

int i=0;
char *list[]={"Tacio","Tania","Claudio"};

qsort(list,4,sizeof(char*),compare);
puts("That's it:\n");

for(i=0;i<4;i++)
    printf("%s\n",list[i]);

}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item{
    const *name;
    const *price;
    int *code;
    struct item *next;

}item;


item* create (char *itemName, char *itemPrice, int *itemCode){

    item *i = malloc(sizeof(item));//Create enough space for an item, and store the address in variable i.
    i->name = strdup(itemName);
    i->price = strdup(itemPrice);
    i->code = strdup(itemCode);
    i->next = NULL;

    return i;
}

void release(item *start)
{
  item *i = start;
  item *next = NULL;
  for (; i != NULL; i = next) {
        next = i->next;
        free(i->name);
        free(i->price);
        free(i->code);
        free(i);
  }
}

void display(item *start)
{
    item *i = start;
    for (; i != NULL; i = i->next){//enquanto o endereço de i for diferente de NULL; incremento: endereço de i recebe endereço que está em i->next
        printf("Name: %s Price: %s Code: %i\n\n",i->name,i->price,i->code);
    }
}

int main(){

    item *start = NULL;
    item *i = NULL;
    item *next = NULL;

    char itemName[20];
    char itemPrice[20];
    int itemCode;

    for(;fgets(itemName,20,stdin) != NULL; i = next){
            fgets(itemPrice,20,stdin);
             scanf("%i",&itemCode);


            next = create(itemName,itemPrice,&itemCode);

            if(start == NULL)
                start = next;//feijao
            if(i != NULL)
                i->next = next;
    }

    display(start);
    release(start);
    return 0;
}


*/
