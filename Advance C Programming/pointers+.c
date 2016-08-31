#include <stdio.h>

int main(int argc, const char * argv[]) {
  // int player1 = 4;
  // int player2[10];
  //
  // print("%x\n", &player1);
  // print("%x\n", &player2);

  int HighScore = 111;
  // Error Handling
  // if (HighScore == 0) {
  //   fprintf(stderr, "You have a value which cannot be used for division\n Exiting...\n");
  //   exit(1);
  // }

  // int *np = NULL;
  // ip == integer pointer, db == double pointer, cp == character pointer
  int *ip;
  ip = &HighScore;
  printf("%x\n", &HighScore);
  printf("%x\n", ip);
  // prints the thing the pointer points to
  printf("%d\n", *ip);

  return 0;
}
