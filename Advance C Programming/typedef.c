#include <stdio.h>

int main(int argc, const char * argv[]) {

  // typedef lets us define our own datatype based on existing datatype
  typedef int score;
  score playerOne = 10;
  printf("%s\n", playerOne);

  return 0;
}
