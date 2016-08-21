#include <stdio.h>

int main(int agrc, const char *agrv[]) {
  int value = 5;

  do {
    if (value == 11) {
      value++;
      continue;
    }
    printf("%d\n", value);
    value++;
  } while (value < 20);

  return 0;
}
