#include<stdio.h>
 
void main() {

  char c = 'c';
  printf("char %c\n", c);

  char *s = "abc";
  printf("string %s\n", s);

  int i = 10;
  printf("int %d\n", i);

  printf("\nunsigned int\n");
  printf("decimal %u\n", i);
  printf("octal %o\n", i);
  printf("hex %x\n", i);
  printf("HEX %X\n", i);

  float f = 20;
  printf("float %f\n", f);

  double d = 20;
  printf("double %f\n", d);
  printf("exponential %e\n", d);
  
  int j = 1;
  printf("pointer %p\n", j); // 0x1
  printf("pointer %p\n", &j);
}

