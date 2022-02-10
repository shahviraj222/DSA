#include<stdio.h>
int main()
{
 void *p;
 int x=10; char y='C';
 p=&x;
 printf("value of X=%d",*((int*)p));          //callling void pointer like this 
 p=&y; 
 printf("\nvalue of Y=%c\n",*((int*)p));
  return 0;
}   