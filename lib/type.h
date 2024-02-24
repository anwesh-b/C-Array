typedef struct {
  int *data;
  int length;
} array;

void push(array *arrayAddress, int dataToPush);
int pop(array *arrayAddress);

