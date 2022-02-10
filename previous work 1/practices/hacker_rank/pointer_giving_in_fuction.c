#include<stdio.h>
int pointer(int *a,int *b)
{
    *a=*a+*b;         //if you want to change the value of a in original then put *before it IMP
}
int main()
{
  int *p,*q;
  int a=10,b=5;
  p=&a;
  q=&b;              // here we give address of a and b;
  pointer(p,q);     // fuction call by refrence actual value variable wiil change in this way
  printf("sum of h and j is %d\n",a);
  return 0;
}