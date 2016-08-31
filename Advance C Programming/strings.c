#include <stdio.h>

int main(int argc, const char * argv[]) {
  // "w" will cause an error
  char player = 'w';
  printf("%c\n", player);

  // strcpy(new_var, player1);
  // char player1[10] = "Hello";
  // char player2[10] = "World";
  // strcat(player1, player2)     //This won't get concatenated because you have to factor in the \0

  // Old method: char player2[10] = {'H', 'E', 'L', 'L', 'O'};
  char player1[10] = "Hello\0";
  printf("%s\n", player1);
  int length = strlen(player1);
  printf("The length of the string is %d\n", length);

  return 0;
}
