#include <stdio.h>

int main(void) {

  int i = 5;
  int *p;
  p = &i;

  printf ("valor de i: %d\n", i);
  printf ("endereço de i: %p\n", &i);

  *p = 7;

  printf ("valor de i: %d\n", i);
  printf ("endereço de i: %p\n", &i);
  printf ("digite um novo valor para i: ");
  scanf ("%d", &i);
  printf ("valor de i: %d\n", i);
  printf ("endereço de i: %p\n", &i);

  return 0;
}