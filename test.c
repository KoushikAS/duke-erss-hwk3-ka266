#include <stdio.h>
#include <stdlib.h>

void function(int a, int b, int c) {
  char buffer1[5];
  char buffer2[10];

  void * p = NULL;

  int * returnPtr = buffer1 + 29;

  (*returnPtr) += 7;
}

int main() {
  int x;
  x = 0;
  function(1, 2, 3);
  x = 1;
  printf("x=%d\n", x);
}
