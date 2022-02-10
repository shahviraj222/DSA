#include<stdio.h>
int main()
{
  FILE *ptr=NULL;
  ptr=fopen("test.txt","r+");
  char a[1000],b[1000];
 printf("entre your string to write in file::");
 scanf("%[^\n]%*c",&a);
 printf("%s",a);
 // writing part
//fprintf(ptr,"%s",a);
// reading part
fscanf(ptr, "%s", &b);
printf("In string we have to read %s",b);
fclose(ptr);
  return 0;
}