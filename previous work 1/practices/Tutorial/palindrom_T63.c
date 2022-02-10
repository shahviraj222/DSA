#include<stdio.h>
int ispalindrome(int n)
{   
    int temp,revrse_num=0,r,ret=0;
    temp=n;
    while (n>0)
    
    {
        r=n%10;
        revrse_num=(revrse_num*10)+r;
        n=n/10;
    }
    if (revrse_num==temp)
        ret=1;
    
    return ret;
       
}
int main()
{
    int a;
  printf("Enter the number to check weathere number is palin or not:");
  scanf("%d",&a);
  ispalindrome(a);
  if(ispalindrome(a))
  {
      printf("number is palindrome\n");
  }
  else
  {
      printf("number is not palindrome\n");
  }
  return 0;
}