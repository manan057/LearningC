#include <stdio.h>

int main(int agrc, const char *agrv[]) {
  int value = 5;

  do {
    printf("%d\n", value);
    value++;
  } while (value < 4);

  return 0;
}
