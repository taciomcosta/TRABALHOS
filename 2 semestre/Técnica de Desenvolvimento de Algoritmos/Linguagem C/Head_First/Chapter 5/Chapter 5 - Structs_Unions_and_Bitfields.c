/*
    A structure is a set of basic datatypes, and is a datatype
----------------------------------------------------------------
If  you have a set of  data that you need to bundle together into a single thing, then you can use a struct.
Like this:

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
};
----------------------------------------------------------------------------
-CREATING PEACES OF DATA TO USE IT:
struct fish snappy = {"Snappy", "Piranha", 69, 4}; == snappy is the var name and struct fish, the data type==
----------------------------------------------------------------------------

-Now, instead of  having to pass around a whole collection of
individual pieces of  data to the functions, you can just pass your
new custom piece of  data:

void catalog(struct fish f)
{
  ...
}
----------------------------------------------------------------------------

READING STRUCT'S FIELDS

printf("Name = %s\n", snappy.name);

----------------------------------------------------------------------------
ASSIGNING A STRUCT TO ANOTHER
struct fish gnasher = snappy; ==gnasher will be equals the snappy struct ==
----------------------------------------------------------------------------
NESTING STRUCTS (one inside another one)

struct preferences {
  const char *food;
  float exercise_hours;
};

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
  struct preferences care;
};

-CREATING VARIABLE TO THIS NESTING
struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};

-HOW TO ACCESS THE FIELDS?
printf("Snappy likes to eat %s", snappy.care.food);

--------------------------------------------------------------------------
CREATING AN ALIAS TO YOUR STRUCTS

typedef struct cell_phone { ==typedef means you're going to give a new name to the struct, in this case it'll be phone (it goes before the last semicolon)
  int cell_no;
  const char *wallpaper;
  float minutes_of_charge;

} phone;

-phone will become an alias for "struct cell_phone"

-so you can use it like:
 phone p = {5557879, "sinatra.png", 1.35};

 *you can also skip the struct name and put just the alias, like this:
 typedef struct {
  int cell_no;
  const char *wallpaper;
  float minutes_of_charge;
} phone;
-------------------------------------------------------------------------------
POINTERS WITH STRUCTS
check the turtleStructsPointerChap5.c == page 280 ==

(*t).age == t->age != *t.age
--------------------------------------------------------------------------------
UNION (pg 286)
-it's like a variable that supports different data types
- a union always set to the size of the largest field

typedef union {             ==union minimize the space in memory.
  short count;
  float weight;
  float volume;
} quantity;

-storing a value for the first field
quantity q = {4}; ==count = 4==

-storing by name (designated initializers) == you also can use it in structs, if you just want to set values to a few fields of the variable
quantity q = {.weight=1.5};


-setting value with dot notation
quantity q;
q.volume = 3.7;
-------------------------------------------------------------------------------------------
USING THE VALUES

typedef union {
  short count;
  float weight;
  float volume;
} quantity;

typedef struct {
  const char *name;
  const char *country;
  quantity amount;
} fruit_order;

-above, we have an struct containing an union, so we can use the values like this:

fruit_order apples = {"apples", "England", .amount.weight=4.2}; == .amount is a quantity variable==
printf("This order contains %2.2f lbs of %s\n", apples.amount.weight, apples.name);

--------------------------------------------------------------------------
KEEPING TRACK OF THE VALUES STORED IN A UNIOIN WITH THE ENUM

-enum lets you create a list of  symbols, like this:
enum colors {RED, GREEN, PUCE};

or this:

typedef enum {
  COUNT, POUNDS, PINTS
} unit_of_measure;



-Any variable that is defined with a type of  enum colors
can then only be set to one of  the keywords in the list.
So, you can define a var like this:

enum colors favorite = PUCE;
----------------------------------------------------------------
STRUCT = You can use all the values of the struct
UNION = you use only one value of the union.

To understand better: http://pt.stackoverflow.com/questions/46668/oque-s%C3%A3o-unions-porque-utiliz%C3%A1-los-dentro-de-structs
--------------------------------------------------------------
*CODE TO STUDY: fruitOrder_EnumsAndStructs_Chap5.c
--------------------------------------------------------------
BITFIELDS
- It's like an struct that stores 0s and 1s values, (false/true)
-The advatange is in the space used in the memory for storing it

- Every time C sees a number beginning with 0x, it treats the
number as a hexadecimal:
int x = 0x54;

-Example of bitfield struct (each field is storing 1 bit):
typedef struct {
  unsigned int low_pass_vcf:1;
  unsigned int filter_coupler:1;
  unsigned int reverb:1;
  unsigned int sequential:1;
  ...
} synth;


-If  you have a sequence of  bitfields, the computer can squash them together to save space

-Bitfields can be used to store a sequence of true/false values, but they’re
also useful for other short-range values, like months of the year. If you want
to store a month number in a struct, you know it will have a value of,
say, 0–11. You can store those values in 4 bits. Why? Because 4 bits let you
store 0–15, but 3 bits only store 0–7. Ex:

unsigned int month_no:4;

-Bitfields should be declared as unsigned int.








*/
