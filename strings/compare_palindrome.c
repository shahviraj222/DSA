#include<stdio.h>
void compare(char *a, char *b)
{
    int i=0,j=0;
    for ( ;a[i]!='\0' && b[j]!='\0';j++, i++)
    {
        if (a[i]!=b[j])
        {
            printf("your strings are unequal\n");
            break;
        }
        
    }
      if(a[i]==b[j])
        {
            printf("Both strings are equal");
        }
     else if(a[i]>b[j])
        {
            printf("Second come first");
        }
     else
       {
           printf("first come first ");
       }   
    
}
int palindrome(char *A)
{
    int i=0,j=0;
    for ( i = 0; A[i]!='\0'; i++)
    {
    }
    i=i-1;
    for ( int j = 0;j<i; j++,i--)
    {
       if (A[i]!=A[j])
       {
           printf("\nstring is not palindrome");
           return 0;
       }
       
    }
    printf("\nstring is palindrome");
    return 1;
    
}
int main()
{
    char a[]="madam";
    char b[]="harre";
    compare(a,b);
    palindrome(a);
    return 0;
}