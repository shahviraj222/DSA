#include <stdio.h>
#include "name.c"
#define pi 3.14 // enter the name of file and you are able to use
int main()
{
  float b = pi;
  main2();
  printf("%s\n", name); // you are using global variable it is defined in "name.c" file
  printf("%f", b);
  return 0;
}