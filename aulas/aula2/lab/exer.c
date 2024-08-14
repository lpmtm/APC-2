#include <stdio.h>

int main(void){
  int n = 1025;
  char *p;
  p = &n;
  p=(char*)&n;

  printf("Valor de p: %p\n", *p);
  printf("Valor de *p: %d\n", *(p+1));
  *(p+2)=1;
  printf ("valor de n: %d\n", n);
  
  return 0;
}