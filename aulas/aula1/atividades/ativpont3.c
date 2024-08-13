#include <stdio.h>

int main(void) {
  int x= 5;
  int *p_x;
  p_x= &x;
  printf ("&x: %p\n", &x);
  printf ("&p_x: %p\n, p_x: %p\n *p_x: %d\n", &p_x, p_x, *p_x:); 

  return 0;
}