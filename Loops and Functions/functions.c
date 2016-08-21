#include <stdio.h>
// pointers store the address values
// to pass addresses, put '&' in front of variable

void swap(int *value1, int *value2) {
    int tmp;

    tmp = *value1;
    *value1 = *value2;
    *value2 = tmp;
    return;
}

int main(int agrc, const char *agrv[]) {
  int firstValue = 5;
  int secondValue = 11;

  printf("The first value is %d\n", firstValue);
  printf("The second value is %d\n" secondValue);

  swap(&firstValue, &secondValue);

  printf("After swapping the values...\n");
  printf("The first value is %d\n", firstValue);
  printf("The second value is %d\n", secondValue);

  return 0;
}
