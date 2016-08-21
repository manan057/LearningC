/* DATA TYPES in C
   Basic
   Enumerated == user defined type with values of the type
      i.e enum type_name(value1, valueN);
   Void == return nothing
   Derived
*/

#include <stdio.h>
#include "limits.h"

/*
CONSTANTS:
  #define a
  const   b
*/
#define LIFE 5
#define BLOOD 3

int main(int argc, const char * argv[]) {
  //printf("Value for storage size of int : %lu \n", sizeof(char));             // char == 1 byte
  //printf("Value for storage size of int : %lu \n", sizeof(unsigned char));
  //printf("Value for storage size of int : %lu \n", sizeof(unsigned short));   // short == 2 bytes
  //printf("Value for storage size of int : %lu \n", sizeof(unsigned int));     // int == 2-4 bytes
  //printf("Value for storage size of int : %lu \n", sizeof(long));             // long == 8 bytes?

  // To add symobols in the printf add 'blah' or just have \!@#$%^&*(), \t == tab, \v == vertical tab
  printf("Hello \b World\n");
  printf("Hello" " World\n");
  // int value = LIFE * BLOOD;
  // printf("%d\n", value);

  int value = 10;
  double eg_double = 10.5;
  char eg_char = 'a';
  printf("%i\n%g\n%c\n", value, eg_double, eg_char);

  return 0;
}
