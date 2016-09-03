/*
DATA TYPES:

char
int (short -1/2 and long x2)
float: everyday floating-points
double: more precise floating_points (twice the size of float)
-----------------------------

CAST:

int x = 7;
int y = 2;
float z = x/y;   ==output = 3.00000


int x = 7;
int y = 2;
float z = (float)x/(float)y;   ==output = 3.5

-if we put 'float z = (float)x/y' The compiler will cast y, because the operation has a float-pointing number
------------------------------------------------------------
OTHER DATATYPES:

-unsigned dataType == The numbers will always be positive ==
-long varName;
-short varName;

-----------------------------------------------------------------
PRINTING:
float with two decimals: %.2f
short: %hi
-----------------------------------------------------------------
MAX,MIN AND SIZE OF DATATYPES: (check dataTypeSizesChap5.c)
#include <limits.h>
#include <float.h>

    printf("INT MAX = %i\n",INT_MAX);
    printf("INT MIN = %i\n",INT_MIN);
    printf("INT size = %i\n\n",sizeof(int));

    printf("FLT MAX = %f\n",FLT_MAX);
    printf("FLT MIN = %.50f\n",FLT_MIN);
    printf("FLT size = %i\n",sizeof(float));

    int: INT
    char: CHAR
    double: DBL
    short: SHRT
    float: FLT
    long: LNG
---------------------------------------------------------------
SPLIT THE DECLARATION FROM THE DEFINITION
-then you can define functions in whatever order

-When you tell the compiler about a function, it's called function declaration. EX:
    float add_with_tax(); == this goes in the main() and you nedd to add args, if it has.

--------------------------------------------------------------
PUTTING THE DECLARATIONS IN A HEADER FILE

1° Create a file with a .h extension
2°Write your declarations
3° Put in your program: #include "yourHeader.h"


*/
