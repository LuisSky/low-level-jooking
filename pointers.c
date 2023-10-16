


#include <stdio.h>
#include <stdlib.h>


int main() {
  int a = 10;

  int *p1 = &a;
  int **p2 = &p1;

  printf("a = %d, adress= %p\n", a, &a);
  printf("p1 = %p, adress= %p\n", p1, &p1);
  printf("p2 = %p, adress= %p\n", p2, &p2);
  printf("p2 content = %d\n", **p2);

  **p2 = 20;
  
  printf("a = %d, adress= %p\n", a, &a);
  printf("p1 = %p, adress= %p\n", p1, &p1);
  printf("p2 = %p, adress= %p\n", p2, &p2);
  printf("p2 content = %d\n\n", **p2);


  printf("p1 = %p\n", &p1);
  printf("p1 content= %d\n", *p1);
  printf("p1 = %p\n", *&p1);
  printf("p2 = %p\n", **&p2);

  return 0;
}