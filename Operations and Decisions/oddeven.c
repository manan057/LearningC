#include <stdio.h>

int main() {
  int number, result = 0;
  printf("Please enter a number: ");
  // put the typed response/input into the memory location associated with the variable number
  scanf("%d", &number);

  result = number % 2;
  if (result == 0) {
    printf("You have entered an EVEN number\n");
  }
  else {
    printf("You have entered a ODD number\n");
  }

  return 0;
}
