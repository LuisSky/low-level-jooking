


#include <stdio.h>
#include <stdlib.h>


int main() {

  //define to a a integer value
  int a = 10;

  //define a first Pointer p1 
  int *p1 = &a;

  //define a Pointer of Pointer p2
  int **p2 = &p1;

  //show all variables contents
  printf("a = %d, adress= %p\n", a, &a);
  printf("p1 = %p, adress= %p\n", p1, &p1);
  printf("p2 = %p, adress= %p\n", p2, &p2);
  printf("p2 content = %d\n", **p2);

  //modify all contents
  **p2 = 20;
  
  //show all variables contents
  printf("a = %d, adress= %p\n", a, &a);
  printf("p1 = %p, adress= %p\n", p1, &p1);
  printf("p2 = %p, adress= %p\n", p2, &p2);
  printf("p2 content = %d\n\n", **p2);


  //p1 adress
  printf("p1 = %p\n", &p1);

  //p1 content
  printf("*p1 content= %d\n", *p1);

  //same &a
  printf("*&p1 = %p\n", *&p1);

  //same $a
  printf("**&p2 = %p\n", **&p2);

  //same a
  printf("**p2 = %d\n", **p2);

  return 0;
}