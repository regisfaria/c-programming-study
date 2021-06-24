#include <stdio.h>
#include <stdlib.h>

int main()
{
  char name[] = "Régis";
  char state[] = "Santa Catarina";
  char work[] = "Programming";

  int age = 23;

  printf("My name is %s!\n", name);
  printf("I live in Santa %s\n", state);
  printf("I work with %s\n", work);
  printf("And I am %d\n", age);
  
  return 0;
}