#include<stdio.h>
#include<stdlib.h>
void rev(char *a)
{
    int i=0;
    char b[7];
    for ( i = 0; a[i]!='\0'; i++) //pointing all the i
    {
        
    }
    i=i-1;
    int j;
    for (j=0;i>=0;j++)  //here i>=0 is imp
    {
        b[j]=a[i];
        i--;
    }
    b[j]='\0';
    printf("%s",b);
    
}
void rev_2(char *A)
{
    int i=0,j;
    char temp;
    for ( j = 0; A[j]!='\0'; j++) //pointing j to last element which is '\0'
    {
    }
    j=j-1;
    while (i<j)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        i++;
        j--;
    }
    printf("%s",A);
   
}
int main()
{
    char s[]="ok";
    rev_2(s);
    printf("\n%s",s);
    return 0;
}