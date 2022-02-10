#include<stdio.h>
int super_digit(int n,int k)
{   
  int t,r,sum=0; 
 if(k==1)
 {
     return n;
 }   
 else
 {
      
    while (n!=0)
    {
      sum=sum+n%10;
      n=n/10;
    }
    n=sum;
    int t=n;
    k=0;
    while (t!=0)
    {
       
      t=t/10;
      k++;
    }
    return super_digit(n,k);
    
 }
}
int main()
{
    int n,t,k=0;
  
    printf("enter the number:");
    scanf("%d",&n);
    t=n;
    while (t!=0)
    {
      t=t/10;
      k++;
    }
    printf("your super digit is %d",super_digit(n,k));
    return 0;
}