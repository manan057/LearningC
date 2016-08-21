#include <stdio.h>
#include "limits.h"

int main(int argc, const char * argv[]) {

  // POINTERS
  int  var = 20;   /* actual variable declaration */
  int  *ip;        /* pointer variable declaration */
  ip = &var;       /* store address of var in pointer variable*/
  printf("Address of var variable: %p\n", &var);       //0x7fff52a078ac
  /* address stored in pointer variable */
  printf("Address stored in ip variable: %p\n", ip);   //0x7fff52a078ac
  /* access the value using the pointer */
  printf("Value of *ip variable: %d\n", *ip );         //20

  return 0;
}
