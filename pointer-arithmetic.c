#include<stdio.h>

int main() {

  // aabbcc
  char str[3] = {'a', 'b', 'c'};
  printf("%c%c", *str,   *(str));
  printf("%c%c", *str + 1, *(str + 1));
  printf("%c%c", *str + 2, *(str + 2));
  printf("\n");

  char *p1 = str;
  char *p2 = str + 2;
  printf("p2 - p1 %li\n", p2 - p1); // 2 - 1 = 2

  printf("p1 < p2 %s\n", p1 < p2 ? "true" : "false");
  printf("p1 > p2 %s\n", p1 > p2 ? "true" : "false");

  return 0;
}
