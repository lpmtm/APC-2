#include <stdio.h>

int main(void) {
 int n = 0x04030201;

  char *p = (char *) &n;
  printf ("notacao de ponteiros: \n");
  printf ("byte 0: %d, byte 1: %d, byte 2: %d, byte 3: %d\n", *p, *(p+1), *(p+2), *(p+3));
  printf ("\nnotacao de vetores: \n");
  printf ("byte 0: %d, byte 1: %d, byte 2: %d, byte 3: %d\n", p[0], p[1], p[2], p[3]);
  
int *pint = &n;
  printf ("\nnotacao de ponteiros: \n");
  printf ("pint: %p(&n), *pint: %d\n", pint, *pint);
  printf ("\nnotacao de vetores: \n");
  printf ("&pint[0]: %p, (&n), pint[0]: %D (n)\n", &pint [0], pint[0]);
int v;
  printf ("representacao de vetor: \n");
  printf ("&v[0]: %p, v[0]: %d\n", &v[0],V[0]);
  printf ("&v[1]: %p, v[1]: %d\n", &v[1],V[1]);
  printf ("&v[2]: %p, v[2]: %d\n", &v[2],V[2]);
  printf ("\n\nrepresentacao de ponteiros: \n");
  printf ("v: %p, *v: %d\n", v, *v);
  printf ("v+0: %p, *(v+0): %d\n", v+0, *(v+0));
  printf ("v+1: %p, *(v+1): %d\n", v+1, *(v+1));
  printf ("v+2: %p, *(v+2): %d\n", v+2, *(v+2));

  int *pvet = v;
  printf ("representacao de vetor: \n");
  printf ("&pvet[0]: %p, pvet[0]: %d\n", &pvet[0],pvet[0]);
  printf ("&pvet[1]: %p, pvet[1]: %d\n", &pvet[1],pvet[1]);
  printf ("&pvet[2]: %p, pvet[2]: %d\n", &pvet[2],pvet[2]);
  printf ("\n\nrepresentacao de ponteiros: \n");
  printf ("pvet: %p, *pvet: %d\n", *pvet, *pvet);
  printf ("pvet+0: %p, *(pvet+0): %d\n", pvet+0, *(pvet+0));
  printf ("pvet+1: %p, *(pvet+1): %d\n", pvet+1, *(pvet+1));
  printf ("pvet+2: %p, *(pvet+2): %d\n", pvet+2, *(pvet+2));
  
  
  
  return 0;
}