/*
CREATE AN ARRAY OF ARRAYS

char tracks [][80]={        == [] represents the number of elements, the compiler can tell that' it's two in this case==
"I left my dogs",           == [80] the tracks won't be longer than 79 chars, so we set it to 80, cause of '\0'==
"I love Newark",
};

-------------------------------------------------------------------------
STRINGS FUNCTIONS (in <string.h> )

strstr("the string", "string or text ur looking for") Find the location of  a character inside a string.
char s0[] = "dysfunctional";
char s1[] = "fun";
if (strstr(s0, s1))
  puts("I found the fun in dysfunctional!");



strcmp(); Compare two strings
strstr(); Find the location of a string inside of another string
strcpy(); Copy one string to another
strlen(); Find the length of a string
strcat(); Concatenate two strings
--------------------------------------------------------------------------
ARRAY OF POINTERS
it's a list of memory addresses stored in an array.

char *names_for_dog[] = {"Bowser", "Bonza", "Snodgrass"};

*/
