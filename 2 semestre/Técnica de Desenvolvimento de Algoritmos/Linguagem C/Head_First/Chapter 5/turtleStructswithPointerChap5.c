/*#include <stdio.h>
typedef struct {
  const char *name;
  const char *species;
  int age;
} turtle;
void happy_birthday(turtle *t) //you're getting an address
{
  (*t).age = (*t).age + 1;     //(*t).age != *t.age == vide pg 280
  printf("Happy Birthday %s! You are now %i years old!\n",
    (*t).name, (*t).age);
}


int main()
{
  turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
  happy_birthday(&myrtle);//you're passing the address of the struct myrtle
  printf("%s's age is now %i\n", myrtle.name, myrtle.age);
  return 0;
}

*/
