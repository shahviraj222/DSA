#include <stdio.h>
char name[59];
int main2()
{
  // char name[50];  // if you are use local variable then you are not be able to use this
  printf("enter your name:"); //in preprocessing file because it is local variable
  scanf("%s", &name);
  // printf("%s",name);

  return 0;
}