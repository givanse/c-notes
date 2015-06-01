#include<stdio.h>

void main() {
  int iVar = 7;
  printf("iVar = %d \n", iVar);
  printf("at: %p \n", &iVar);

  // iPtr points to iVar
  int *iPtr = &iVar;
  printf("iPtr = %p (iVar)\n", iPtr);
  printf("at: %p \n", &iPtr);

  // pointer to pointer
  int **iPtrPtr = &iPtr;
  printf("iPtrPtr = %p (iPtr)\n", iPtrPtr);
  printf("at: %p \n", &iPtrPtr);
}
