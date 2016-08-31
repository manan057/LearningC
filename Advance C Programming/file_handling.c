#include <stdio.h>

int main(int argc, const char * argv[]) {

  FILE *fp;
  fp = fopen("/Users/manan/Desktop/test.txt", "w+");
  fputs("Please put this text in my FILE\n", fp);
  // fprintf(fp, "Please put this text in my FILE");
  fclose(fp);

  return 0;
}
