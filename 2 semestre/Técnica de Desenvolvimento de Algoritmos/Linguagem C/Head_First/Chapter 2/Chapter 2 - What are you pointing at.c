/*
A pointer is just the address of  a piece of  data in memory.

Pointers help you do both these things: avoid copies and share data.

REASONS FOR USING POINTERS:
1. Instead of passing around a whole copy of the data, you can just pass a pointer.
2. You might want two pieces of code to work on the same piece of data rather than a separate copy.

----------------------------------------------------------------------------

DIGGING INTO MEMORY
 If  you declare a variable inside a function like main(), the computer will store it in a section of  memory called the 'stack'. If
a variable is declared outside any function, it will be stored in the 'globals' section of  memory.

variable in a function = stored in the stack
variable out of a function = stored in globals

-----------------------------------------------------------------------------

 If  you want to find out the memory address of  the variable, you can use the & operator:
    printf("x is stored at %p\n", &x);

-------------------------------------------------------------------------------

There are three things you need to know in order to use pointers to read and write data.
1. Get the address of a variable.
    int  x = 4;
    printf("x lives at %p\n", &x);

     once you’ve got the address of a variable, you may want to store it somewhere. To do that, you will need a pointer variable.
        int *address_of_x = &x;

2. Read the contents of an address.
 You do that with the * operator:    int value_stored = *address_of_x;

3. Change the contents of an address.
    *address_of_x = 99;

------------------------------------------------------------------------
 The & operator takes a piece of  data and tells you where it’s stored. |
 The * operator takes an address and tells you what’s stored there.     |
------------------------------------------------------------------------

How do you pass a string to a function?
void fortune_cookie (char msg[]){   ==you don't know the string length, so you put []


    sizeof(msg); == returns the length of msg ==
    You can also call sizeof for a data type, such as sizeof(int).
}
 char quote[] = "Cookies make you fat";
 fortune_cookie(quote);


== char msg[] works like a pointer, so it's taking an address ==
==strings works like a pointer==
------------------------------------------------------------------
ARRAY VARIABLES ARE LIKE POINTERS
char quote[]="Cookies make you fat";  == The 'quote' variable will represent the address of quote[0]
it means quote <=> &quote,so:

- int *choice = quote; == it's passing its address, not its value.

----------------------------------------------------------------------------------
WHY ARRAYS REALLY STARTS AT 0
    - drink[0] <=> *drinks
    - drinks[2] <=> *(drinks+2) <=> 2[drinks]
------------------------------------------------------------------------------------
USING POINTERS FOR DATA ENTRY

char name[40];
printf("Enter your name: ");
scanf("%39s", name);  ==scanf will read up to 39 chars + \o

ENTERING NUMBERS WITH SCANF()

int age;
printf("Enter your age: ");
scanf("%i", &age);  == it will updates the value at the adress of 'age'



char first_name[20];
char last_name[20];
printf("Enter first and last name: ");
scanf("%19s %19s", first_name, last_name);
printf("First: %s Last:%s\n", first_name, last_name);


---------------------------------------------------------------------
fgets() IS AN ALTERNATIVE TO scanf()
it just reads strings

char food[5];
printf("Enter your favorite food: ");
fgets(<food>, sizeof(food), stdin); == it requires the max length, in this case it's defined by 'sizeof(food)'
== fgets also includes the \o so you don't need to set it to 'sizeof(food)-1'

---------------------------------------------------------------------------
WHY ARRAYS REALLY STARTS AT 0
- drinks[0] <=> *drinks
- drinks [2] <=> *(drinks+2) <=> 2[drinks]
- char cards[]="JQK"; !=  char *cards="JQK";    == the 2nd is a constant, prefer to use cons *cards="JQK";

-int my_function(){
    char cards[]="JQK"; == here card is an array==
}


- void stack_deck(char cards[]){   == here card is a point, so it'll receive an address
}
*/
