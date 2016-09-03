#include "encrypt.h" // you must include it here

void encrypt(char *message)
{
  char c;
  while (*message) {
    *message = *message ^ 31;
    message++;
  }
}
