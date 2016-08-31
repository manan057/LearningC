#include <stdio.h>

struct player {
  char playerName[50];
  char stageLevel[50];
  int score;
};

int main(int argc, const char * argv[]) {

  struct player john;
  strcpy(john.playerName, "John Smith");
  strcpy(john.stageLevel, "Kings Room");
  john.score = 500;

  printf("%s is in %s stage and his socre is %d\n", john.playerName, john.stageLevel, john.score);

  return 0;
}
