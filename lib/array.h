#ifndef C_ARRAY
#define C_ARRAY

#include "type.h"
#include <stdlib.h>
#endif // C_ARRAY

void push(array *orgArray, int dataToFeed) {
  int newLength = orgArray->length + 1;

  // Reallocating the space.
  orgArray->data = (int *)realloc(orgArray->data, sizeof(int) * newLength);

  // Feeding the updated value.
  orgArray->data[newLength - 1] = dataToFeed;
  orgArray->length = newLength;
}

int pop(array *orgArray) {
  if (orgArray->length == 0) {
    // Expecting -1 to be the error return code.
    // Need some better error handling 🤔
    return 0;
  }

  int lastData;
  int newLen = orgArray->length - 1;
  lastData = orgArray->data[newLen];

  orgArray->data = (int *)realloc(orgArray->data, sizeof(int) * newLen);
  orgArray->length = newLen;

  return lastData;
}

