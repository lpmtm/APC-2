include <stdio.h>

int main(void){

  int i = 5;
  int *p;
  p = NULL; //p = 0x0000; p = 0;
  p = &i;

  printf ("&p: %p\n", &p);
  printf ("p (&i - endereço de i): %p\n", p);
  printf ("*p (&i - valor de i): %d\n", *p);

  *p = 7; //i=7;
  printf ("*p (i- valor de i): %d (i: %d)\n",  *p, i);

  printf ("digite um numero: ");
  scanf ("%d", p);
  

  return 0;
}