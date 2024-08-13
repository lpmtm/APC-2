#include <stdio.h>

int main(void){

  int i = 5;
  int *p;
  p = &i;

  printf("Valor de i: %d\n", i);
  printf("Endereço de i: %p\n", &i);

  *p = 7;

  printf("Valor de i: %d\n", i);
  printf("Endereço de i: %p\n", &i);
  printf("Digite um novo valor para i: ");
  scanf("%d", &i);
  printf("Valor de i: %d\n", i);
  printf("Endereço de i: %p\n", &i);

  
  






  return 0;
}