#include <stdio.h>

int main(int argc, const char * argv[]) {
  //double salary[10];
  //double salary [4] = {100, 250, 500, 1000};

  // size is automatically allocated to memory
  //double salary[] = {100, 200, 300, 400, 500, 600};
  //salary[0] = 20.0  ==> {20.0, 100, 200, ...} things will automatically shift

  int rollNo[20];
  for (var i = 0; i < 20; i++) {
    rollNo[i] = 1929+i
  }
  for (var j = 0; j < 20; j++) {
    printf("Element value at [%d]: %d\n", j, rollNo[j]);
  }

  // 3 rows and 4 elements
  int salary[3][4] = {{101, 102, 103, 104}, {201, 202, 203, 204}, {301, 302, 303, 304}};
  for (var i = 0; i < 3; i++) {
    for (var j = 0; j < 4; j++) {
      printf("Element value at salary[%d][%d]: %d\n", i, j, salary[i][j]);
    }
  }


  return 0;
}
