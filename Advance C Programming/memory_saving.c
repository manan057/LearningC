#include <stdio.h>

struct {
  // only use 1 bit of memory
  unsigned int lowMemory : 1;
  unsigned int highMemory : 1;
} mem1;

int main(int argc, const char * argv[]) {
  printf("The memor size occupied by mem1 is: %lu bytes\n", sizeof(mem1));
  return 0;
}
