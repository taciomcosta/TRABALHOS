/*
THE FUNCTION NAME IS A POINTER!
-It’s a way of  referring to the piece of  code.
- When you create a function called  go_to_warp_speed(int speed), you are also creating
 a pointer variable called go_to_warp_speed that contains the address of  the function.
-The function stays in the CONSTANT area of the memory
 -----------------------------------------------------------------------------------------
 THERE'S NO FUNCTION DATA TYPE
 like an int has, ex:
 int *a;
 ---------------------------------------------------------------------------------
 HOW TO CREATE FUNCTION POINTERS?

 The format of a function pointer is:
 Return type  ( *Pointer_variable )( Param_types )
 -----------------------------------
 EX1: We have this function
 int go_to_warp_speed(int speed)
{
  ...
}

The pointer will be like this:

int (*warp_fn)(int);    == this creates the pointer with the name 'warp_fn'
 the int out of parentheses refers to the function/pointer type, the int in
 parentheses refers to the args of the go_to_warp_speed function

warp_fn = go_to_warp_speed; ==warp_fn is pointing to the go_to_warp_speed

warp_fn(4); ==here we're calling the function through its pointer
---------------------------------------
EX2:
char** album_names(char *artist, int year) == char** is a pointer normally used to point to an array of strings.
{
  ...
}


char** (*names_fn)(char*,int);
names_fn = album_names;
char** results = names_fn("Sacha Distel", 1972);
-------------------------------------------------
 -Once you’ve declared a function pointer variable, you can use it like any other variable.
 You can assign values to it, you can add it to arrays, and you can also pass it to functions
 ---------------------------------------------------------------------------------------------
 CODE TO STUDY:functionsMatches.c
 -It passes functions as parameters to the function void
 -Check lines 33, 59-62
 --------------------------------------------------------------------------------------------
 SORT FUNCTIONS
  -The C Standard Library has a sort function that accepts a pointer to a comparator
function, which will be used to decide if  one piece of  data is the same as, less than,
or greater than another piece of  data

This is what the qsort() function looks like:
-The qsort() works with a comparator function that has void* data types as parameteres
-A void pointer void* can store a pointer to anything.
-The comparator must return a value to the qsort, and the qsort will sort all the data
-The qsort() function compares pairs of  values over and over again, and if  they are
in the wrong order, the computer will switch them.
------------------------------------------------------------------------------------
qsort(void *array,
      size_t length,
      size_t item_size,
      int (*compar)(const void *, const void *));


-void *array == It's a pointer to an array ==
-size_t length == It's the length of the array==
-site_t item_size == It's the size of each element in the array ==
-const void *, const void *== Remember? a void* pointer can point to anything.==
-*compar == This is a pointer to a function that compares two items in the array. ==

-------------------------------------------------------------------------
COMPARATOR FUNCTION
-The comparator function must cast the data it'll receives before using it
-The comparator function must returns to the qsort():
    -If value1 > value 2 == positive number ==
    -If value1 < value 2 == negative number ==
    -If value1 = value 2 == 0 ==

    int compare_scores_desc(const void* score_a, const void* score_b)
{
    int a = *(int*)score_a; // converting the void* to an int data type
    int b = *(int*)score_b; //
    return b - a;
}
--------------------------------------------------------------------------------
CODE TO STUDY: orderingQsort_Chap7.c
----------------------------------------------------------------------------
ABOUT CHAR**
Each item in a string array is a char pointer (char*). When qsort() calls the
comparator function, it sends pointers to two elements in the arrays.
That means the comparator receives two pointers-to-pointers-to-char.
In C notation, each value is a char**.
----------------------------------------------------------------------------------
ARRAY OF STRUCTS:
CODE: mailMerge_Chap7.c
----------------------------------------------------------------------------------
ARRAY OF FUNCTIONS POINTERS:
-You have to tell the compiler exactly what the functions will look like that you’re
going to store in the array: what their return types will be and what parameters they’ll accept.

 void (*replies[])(response) = {dump, second_chance, marriage};

-void: each function in the array will be a void function (returns void,i.e, nothing)
-this array is called replies
-there's only one parameter: response type
------------------------------------------------------------------------------------
USING ENUM TO GET POINTERS TO IT:
-when C creates an enum, it gives each of the symbols a number starting at 0.

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
replies[SECOND_CHANCE] == second_chance       ==It is the same as replies[1] ...==
          1                   1
----------------------------------------------------------------------------------------
VARIADIC FUNCTIONS
-It's a function that takes a variable number of parameters 
- It uses macros
--------------------------------------------------------------------------------------
MACRO
  -A macro is used to rewrite your code before it’s compiled. The macros
  you’re using here ( va_start , va_arg , and va_end ) might look
  like functions, but they actually hide secret instructions that tell the
  preprocessor how to generate lots of extra smart code inside your
  program, just before compiling it.



*/
