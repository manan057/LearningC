#include <stdio.h>

int factorial(i) {
  if (i < 1) {
    return 1;
  }
  
  return i * factorial(i-1);
}

int main(int argc, const char * argv[]) {

  int number = 9;
  printf("The value of the factorial is %d\n", factorial(number));

  return 0;
}
