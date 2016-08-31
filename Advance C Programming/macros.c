#include <stdio.h>

int main(int argc, const char * argv[]) {
  
  printf("%s\n", __FILE__);
  printf("%s\n", __DATE__);
  printf("%s\n", __TIME__);
  printf("%d\n", __LINE__);
  printf("%d\n", __SDLC__);
  return 0;
}
