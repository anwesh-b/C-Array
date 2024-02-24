#include "lib/array.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("High level aray impls.");
  array myArray;

  myArray.length = 0;
  myArray.data = calloc(0, sizeof(int));

  push(&myArray, 5);
  push(&myArray, 15);
  push(&myArray, 25);

  int poppedData = pop(&myArray);

  printf("\nPoppedValue: %d", poppedData);

  return 0;
}

