/*
LINKED LIST (pg 307)
-Linked lists are like chains of data
-It's used to store a flexible amount of data, it's more extensible than an array
-So linked lists allow you to store a variable amount of  data, and they make it simple
to add more data.
-A linked list stores a piece of  data, and a link to another piece of  data.
-A linked list needs to know the start of the list
---------------------------------------------------------
RECURSIVE STRUCTURE:
-A struct that contains a link to another struct of  the same
type is called a recursive structure.

EX:
typedef struct island { == you must give the structure name ==
  char *name;
  char *opens;
  char *closes;
  struct island  *next;
} island;
---------------------------------------------------------
LINKING ISLAND: check linkingIsland_Chap6.c

island amity = {"Amity", "09:00", "17:00", NULL};
island craggy = {"Craggy", "09:00", "17:00", NULL};
island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};

amity.next = &craggy;
craggy.next = &isla_nublar;
---------------------------------------------------------
INSERTING DATA BETWEEN DATA

-To do that you just have to change the addresses and create the new data, of course:
island shutter = {"Shutter", "09:00", "17:00", NULL};
craggy.next = &shutter;
shutter.next = &isla_nublar;

---------------------------------------------------------
DYNAMIC STORAGE
It's used when you don't know the amount of data that your program will need to store
-STACK: The stack is the area of  memory that’s used for local variables.
Each piece of  data is stored in a variable, and each variable disappears as soon as you
leave its function.

-HEAP:  The heap is the place where a program stores data that will need to be
available longer term.

---------------------------------------------------------
The malloc() function

 -You tell the malloc() function exactly how much memory you need(in bits), and it asks
 the operating system to set that much memory aside in the heap. The malloc() function
 then returns a pointer to the new heap space.

The free() function
-The malloc() function allocates space and gives you a pointer to it.
You’ll need to use this pointer to access the data and then, when you’re
finished with the storage, you need to release the memory using the
free() function
---------------------------------------------------------
HOW TO USE THE MALLOC() AND THE FREE()
-#include <stdlib.h>


- Most of  the time, you probably don’t know exactly how much memory you need
in bytes, so malloc() is almost always used with an operator called sizeof, like this:
EX1:malloc(sizeof(island));

Ex2: island *p = malloc(sizeof(island));
(This means: “Create enough space for an island, and store the address in variable p.”)

-Finally, you must free p like this:
free(p);

---------------------------------------------------------
FUNCTION EX:
island* create(char *name) // It will return a data of the type 'island'
{
  island *i = malloc(sizeof(island));
  i->name = name;
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}
--------------------------------------------------------------
THE STRDUP() FUNCTION

-#include <string.h>

-The strdup() function can reproduce a complete copy of  the string somewhere on the heap:
char *copy = strdup(s);

-That means that strdup() always creates space on the heap. It can’t create space on
the stack because that’s for local variables, and local variables get cleared away too often.

-The strdup() function works out how long the string is, and then
calls the malloc() function to allocate the correct number of characters on the heap

-You need to free() space when you use the strdup().


FIXING THE CODE ABOVE:
island* create(char *name)
{
  island *i = malloc(sizeof(island));
  i->name = strdup(name);
  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}




*/
