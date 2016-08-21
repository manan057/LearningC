#include <stdio.h>

int main() {
  int life = 11;
  int bonus = 2;
  int factor;

  factor = life + bonus;
  printf("Value of factor is: %d\n", factor);

  factor = factor - bonus;
  printf("Value of minus is: %d\n", factor);

  factor = life * bonus;
  printf("Value of multiply is: %d\n", factor);

  factor = life / bonus;
  printf("Value of divide is: %d\n", factor);

  factor = life % bonus;
  printf("Value of modulus is: %d\n", factor);

  life =  life + 1;
  printf("Value of life is: %d\n", life);

  //prefix
  --life;
  printf("Value of life is: %d\n", life);
  //postfix
  life--;
  printf("Value of life is: %d\n", life);

  return 0;
}
