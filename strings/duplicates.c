#include<stdio.h>
void hash_method(char *a)
{
    int h[26]={0};
    for (int i = 0;a[i]!='\0'; i++)
    {
      h[a[i]-97]++;   
    }
    for (int i = 0;i<26; i++)
    {
        if (h[i]>1)
        {
          printf("repeat this char %c for times %d\n ",i+97,h[i]);
          
        }
        
    }
    
}
// same approch as in hash method but diffrance is only that we use bit insted of array
void bit_method(char *a)
{
  int h=0,x=0;          //compilare is 16bit my int size is 4byte
  for (int i = 0;a[i]!='\0'; i++)
  {
    x=1;
    x=x<<a[i]-97;
    if (x&h>0)                                  // taking & operation >0 means have common in both strings
    {
      printf("'%c' is duplicate\n",a[i]);
    }
    else
    {
      h=x||h;                                     //bit or oprater
    }
    
  }
  

}
int main()
{
    char a[]="findingandsearching";
    bit_method(a);
    return 0;
    
}