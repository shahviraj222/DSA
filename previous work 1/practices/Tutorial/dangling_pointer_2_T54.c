#include<stdio.h>
#include<stdlib.h>
int main()
{ //Case-1de allocation of memory block
  int *ptr;
  ptr=(int *)(malloc(7*sizeof(int)));
  ptr[0]=34;
  ptr[1]=345;
  ptr[2]=344;
  ptr[3]=3;
  free(ptr);
  // Case-2Function returning local variable address
  //refre the privious program
  return 0;
}