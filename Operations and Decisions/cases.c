#include <stdio.h>

int main() {
  int rating = 4;

  switch (rating) {
    case 5:
      printf("Hey, this was a great course!\n");
      break;
    case 4:
      printf("You have gave a rating of 4\n");
      break;
    case 3:
      printf("You have gave a rating of 3\n");
      break;
    case 2:
      printf("You have gave a rating of 2\n");
      break;
    //if none of the cases match
    default:
      printf("That was not a valid rating");
      break;
  }

  return 0;
}
